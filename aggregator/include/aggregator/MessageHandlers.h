#pragma once

#include <drogon/orm/DbClient.h>

namespace aggregator {

class IServerRegistry;
struct WsData;

class MessageHandlers {
public:
    drogon::Task<chat::RegisterServerResponse> handleServerRegister(const std::shared_ptr<WsData>& wsData, const chat::RegisterServerRequest& req, IServerRegistry& registry) const;
    drogon::Task<chat::GetServerNodesResponse> handleGetServers(const std::shared_ptr<WsData>& wsData, const chat::GetServerNodesRequest& req, IServerRegistry& registry) const;
};

} // namespace aggregator
