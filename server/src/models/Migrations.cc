/**
 *
 *  Migrations.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include <server/models/Migrations.h>
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::drogon_test;

const std::string Migrations::Cols::_id = "\"id\"";
const std::string Migrations::Cols::_timestamp = "\"timestamp\"";
const std::string Migrations::Cols::_name = "\"name\"";
const std::string Migrations::Cols::_applied_at = "\"applied_at\"";
const std::string Migrations::primaryKeyName = "id";
const bool Migrations::hasPrimaryKey = true;
const std::string Migrations::tableName = "\"migrations\"";

const std::vector<typename Migrations::MetaData> Migrations::metaData_={
{"id","int32_t","integer",4,1,1,1},
{"timestamp","int64_t","bigint",8,0,0,1},
{"name","std::string","character varying",255,0,0,1},
{"applied_at","int64_t","bigint",8,0,0,0}
};
const std::string &Migrations::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Migrations::Migrations(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["id"].isNull())
        {
            id_=std::make_shared<int32_t>(r["id"].as<int32_t>());
        }
        if(!r["timestamp"].isNull())
        {
            timestamp_=std::make_shared<int64_t>(r["timestamp"].as<int64_t>());
        }
        if(!r["name"].isNull())
        {
            name_=std::make_shared<std::string>(r["name"].as<std::string>());
        }
        if(!r["applied_at"].isNull())
        {
            appliedAt_=std::make_shared<int64_t>(r["applied_at"].as<int64_t>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 4 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            id_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            timestamp_=std::make_shared<int64_t>(r[index].as<int64_t>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            name_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            appliedAt_=std::make_shared<int64_t>(r[index].as<int64_t>());
        }
    }

}

Migrations::Migrations(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            timestamp_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            appliedAt_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[3]].asInt64());
        }
    }
}

Migrations::Migrations(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("timestamp"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["timestamp"].isNull())
        {
            timestamp_=std::make_shared<int64_t>((int64_t)pJson["timestamp"].asInt64());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("applied_at"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["applied_at"].isNull())
        {
            appliedAt_=std::make_shared<int64_t>((int64_t)pJson["applied_at"].asInt64());
        }
    }
}

void Migrations::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            timestamp_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            appliedAt_=std::make_shared<int64_t>((int64_t)pJson[pMasqueradingVector[3]].asInt64());
        }
    }
}

void Migrations::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
        }
    }
    if(pJson.isMember("timestamp"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["timestamp"].isNull())
        {
            timestamp_=std::make_shared<int64_t>((int64_t)pJson["timestamp"].asInt64());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("applied_at"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["applied_at"].isNull())
        {
            appliedAt_=std::make_shared<int64_t>((int64_t)pJson["applied_at"].asInt64());
        }
    }
}

const int32_t &Migrations::getValueOfId() const noexcept
{
    static const int32_t defaultValue = int32_t();
    if(id_)
        return *id_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Migrations::getId() const noexcept
{
    return id_;
}
void Migrations::setId(const int32_t &pId) noexcept
{
    id_ = std::make_shared<int32_t>(pId);
    dirtyFlag_[0] = true;
}
const typename Migrations::PrimaryKeyType & Migrations::getPrimaryKey() const
{
    assert(id_);
    return *id_;
}

const int64_t &Migrations::getValueOfTimestamp() const noexcept
{
    static const int64_t defaultValue = int64_t();
    if(timestamp_)
        return *timestamp_;
    return defaultValue;
}
const std::shared_ptr<int64_t> &Migrations::getTimestamp() const noexcept
{
    return timestamp_;
}
void Migrations::setTimestamp(const int64_t &pTimestamp) noexcept
{
    timestamp_ = std::make_shared<int64_t>(pTimestamp);
    dirtyFlag_[1] = true;
}

const std::string &Migrations::getValueOfName() const noexcept
{
    static const std::string defaultValue = std::string();
    if(name_)
        return *name_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Migrations::getName() const noexcept
{
    return name_;
}
void Migrations::setName(const std::string &pName) noexcept
{
    name_ = std::make_shared<std::string>(pName);
    dirtyFlag_[2] = true;
}
void Migrations::setName(std::string &&pName) noexcept
{
    name_ = std::make_shared<std::string>(std::move(pName));
    dirtyFlag_[2] = true;
}

const int64_t &Migrations::getValueOfAppliedAt() const noexcept
{
    static const int64_t defaultValue = int64_t();
    if(appliedAt_)
        return *appliedAt_;
    return defaultValue;
}
const std::shared_ptr<int64_t> &Migrations::getAppliedAt() const noexcept
{
    return appliedAt_;
}
void Migrations::setAppliedAt(const int64_t &pAppliedAt) noexcept
{
    appliedAt_ = std::make_shared<int64_t>(pAppliedAt);
    dirtyFlag_[3] = true;
}
void Migrations::setAppliedAtToNull() noexcept
{
    appliedAt_.reset();
    dirtyFlag_[3] = true;
}

void Migrations::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Migrations::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "timestamp",
        "name",
        "applied_at"
    };
    return inCols;
}

void Migrations::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getTimestamp())
        {
            binder << getValueOfTimestamp();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getAppliedAt())
        {
            binder << getValueOfAppliedAt();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Migrations::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    if(dirtyFlag_[3])
    {
        ret.push_back(getColumnName(3));
    }
    return ret;
}

void Migrations::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getTimestamp())
        {
            binder << getValueOfTimestamp();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getAppliedAt())
        {
            binder << getValueOfAppliedAt();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Migrations::toJson() const
{
    Json::Value ret;
    if(getId())
    {
        ret["id"]=getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getTimestamp())
    {
        ret["timestamp"]=(Json::Int64)getValueOfTimestamp();
    }
    else
    {
        ret["timestamp"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getAppliedAt())
    {
        ret["applied_at"]=(Json::Int64)getValueOfAppliedAt();
    }
    else
    {
        ret["applied_at"]=Json::Value();
    }
    return ret;
}

Json::Value Migrations::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 4)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getId())
            {
                ret[pMasqueradingVector[0]]=getValueOfId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getTimestamp())
            {
                ret[pMasqueradingVector[1]]=(Json::Int64)getValueOfTimestamp();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getName())
            {
                ret[pMasqueradingVector[2]]=getValueOfName();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getAppliedAt())
            {
                ret[pMasqueradingVector[3]]=(Json::Int64)getValueOfAppliedAt();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getId())
    {
        ret["id"]=getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getTimestamp())
    {
        ret["timestamp"]=(Json::Int64)getValueOfTimestamp();
    }
    else
    {
        ret["timestamp"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getAppliedAt())
    {
        ret["applied_at"]=(Json::Int64)getValueOfAppliedAt();
    }
    else
    {
        ret["applied_at"]=Json::Value();
    }
    return ret;
}

bool Migrations::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, true))
            return false;
    }
    if(pJson.isMember("timestamp"))
    {
        if(!validJsonOfField(1, "timestamp", pJson["timestamp"], err, true))
            return false;
    }
    else
    {
        err="The timestamp column cannot be null";
        return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(2, "name", pJson["name"], err, true))
            return false;
    }
    else
    {
        err="The name column cannot be null";
        return false;
    }
    if(pJson.isMember("applied_at"))
    {
        if(!validJsonOfField(3, "applied_at", pJson["applied_at"], err, true))
            return false;
    }
    return true;
}
bool Migrations::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                    const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err)
{
    if(pMasqueradingVector.size() != 4)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[2] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[3].empty())
      {
          if(pJson.isMember(pMasqueradingVector[3]))
          {
              if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, true))
                  return false;
          }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Migrations::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("timestamp"))
    {
        if(!validJsonOfField(1, "timestamp", pJson["timestamp"], err, false))
            return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(2, "name", pJson["name"], err, false))
            return false;
    }
    if(pJson.isMember("applied_at"))
    {
        if(!validJsonOfField(3, "applied_at", pJson["applied_at"], err, false))
            return false;
    }
    return true;
}
bool Migrations::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                  const std::vector<std::string> &pMasqueradingVector,
                                                  std::string &err)
{
    if(pMasqueradingVector.size() != 4)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
      if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
      {
          if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Migrations::validJsonOfField(size_t index,
                                  const std::string &fieldName,
                                  const Json::Value &pJson,
                                  std::string &err,
                                  bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(isForCreation)
            {
                err="The automatic primary key cannot be set";
                return false;
            }
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isInt64())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 2:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            if(pJson.isString() && std::strlen(pJson.asCString()) > 255)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 255)";
                return false;
            }

            break;
        case 3:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isInt64())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
