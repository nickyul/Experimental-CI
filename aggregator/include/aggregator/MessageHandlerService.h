#pragma once

namespace aggregator {

class MessageHandlers;
class IServerRegistry;
struct WsData;

class MessageHandlerService {
public:
    explicit MessageHandlerService(std::unique_ptr<MessageHandlers> handlers);
    ~MessageHandlerService();

    drogon::Task<chat::Envelope> processMessage(const std::shared_ptr<WsData>& wsData, const chat::Envelope& env, IServerRegistry& registry) const;
private:
    std::unique_ptr<MessageHandlers> m_handlers;
};

} // namespace aggregator
