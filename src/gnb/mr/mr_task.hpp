//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <memory>
#include <thread>
#include <udp/server_task.hpp>
#include <unordered_map>
#include <urs/rls/gnb_entity.hpp>
#include <utils/logger.hpp>
#include <utils/nts.hpp>
#include <vector>

#include "gnb/gnb_nts.hpp"
#include "mr_rls.hpp"

namespace nr::gnb
{

class GnbMrTask : public NtsTask
{
  private:
    TaskBase *base;
    std::unique_ptr<Logger> logger;

    udp::UdpServerTask *udpTask;
    GnbRls *rlsEntity;

    std::unordered_map<int, MrUeContext> ueMap;

  public:
    explicit GnbMrTask(TaskBase *base);
    ~GnbMrTask() override = default;

  protected:
    void onStart() override;
    void onLoop() override;
    void onQuit() override;

  private:
    void onUeConnected(int ue, const std::string &name);
    void onUeReleased(int ue, rls::ECause cause);
    void receiveUplinkPayload(int ue, rls::EPayloadType type, OctetString &&payload);
};

} // namespace nr::gnb