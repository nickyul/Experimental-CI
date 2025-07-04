/**
 *
 *  Users.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <drogon/orm/BaseBuilder.h>
#ifdef __cpp_impl_coroutine
#include <drogon/orm/CoroMapper.h>
#endif
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <string_view>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace drogon_test
{
class Messages;
class RoomMembership;
class Rooms;

class Users
{
  public:
    struct Cols
    {
        static const std::string _user_id;
        static const std::string _username;
        static const std::string _hash_password;
        static const std::string _salt;
        static const std::string _is_admin;
        static const std::string _created_at;
    };

    static const int primaryKeyNumber;
    static const std::string tableName;
    static const bool hasPrimaryKey;
    static const std::string primaryKeyName;
    using PrimaryKeyType = int32_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names,
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all
     * columns by an asterisk), please set the offset to -1.
     */
    explicit Users(const drogon::orm::Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Users(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Users(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Users() = default;

    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson,
                          std::string &err,
                          bool isForCreation);

    /**  For column user_id  */
    ///Get the value of the column user_id, returns the default value if the column is null
    const int32_t &getValueOfUserId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getUserId() const noexcept;
    ///Set the value of the column user_id
    void setUserId(const int32_t &pUserId) noexcept;

    /**  For column username  */
    ///Get the value of the column username, returns the default value if the column is null
    const std::string &getValueOfUsername() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getUsername() const noexcept;
    ///Set the value of the column username
    void setUsername(const std::string &pUsername) noexcept;
    void setUsername(std::string &&pUsername) noexcept;

    /**  For column hash_password  */
    ///Get the value of the column hash_password, returns the default value if the column is null
    const std::string &getValueOfHashPassword() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getHashPassword() const noexcept;
    ///Set the value of the column hash_password
    void setHashPassword(const std::string &pHashPassword) noexcept;
    void setHashPassword(std::string &&pHashPassword) noexcept;

    /**  For column salt  */
    ///Get the value of the column salt, returns the default value if the column is null
    const std::string &getValueOfSalt() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSalt() const noexcept;
    ///Set the value of the column salt
    void setSalt(const std::string &pSalt) noexcept;
    void setSalt(std::string &&pSalt) noexcept;
    void setSaltToNull() noexcept;

    /**  For column is_admin  */
    ///Get the value of the column is_admin, returns the default value if the column is null
    const bool &getValueOfIsAdmin() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<bool> &getIsAdmin() const noexcept;
    ///Set the value of the column is_admin
    void setIsAdmin(const bool &pIsAdmin) noexcept;

    /**  For column created_at  */
    ///Get the value of the column created_at, returns the default value if the column is null
    const int64_t &getValueOfCreatedAt() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getCreatedAt() const noexcept;
    ///Set the value of the column created_at
    void setCreatedAt(const int64_t &pCreatedAt) noexcept;
    void setCreatedAtToNull() noexcept;


    static size_t getColumnNumber() noexcept {  return 6;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
    std::vector<Messages> getMessages(const drogon::orm::DbClientPtr &clientPtr) const;
    void getMessages(const drogon::orm::DbClientPtr &clientPtr,
                     const std::function<void(std::vector<Messages>)> &rcb,
                     const drogon::orm::ExceptionCallback &ecb) const;
    std::vector<Rooms> getRoom(const drogon::orm::DbClientPtr &clientPtr) const;
    void getRoom(const drogon::orm::DbClientPtr &clientPtr,
                 const std::function<void(std::vector<Rooms>)> &rcb,
                 const drogon::orm::ExceptionCallback &ecb) const;
    std::vector<std::pair<Rooms,RoomMembership>> getRooms(const drogon::orm::DbClientPtr &clientPtr) const;
    void getRooms(const drogon::orm::DbClientPtr &clientPtr,
                  const std::function<void(std::vector<std::pair<Rooms,RoomMembership>>)> &rcb,
                  const drogon::orm::ExceptionCallback &ecb) const;
  private:
    friend drogon::orm::Mapper<Users>;
    friend drogon::orm::BaseBuilder<Users, true, true>;
    friend drogon::orm::BaseBuilder<Users, true, false>;
    friend drogon::orm::BaseBuilder<Users, false, true>;
    friend drogon::orm::BaseBuilder<Users, false, false>;
#ifdef __cpp_impl_coroutine
    friend drogon::orm::CoroMapper<Users>;
#endif
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> userId_;
    std::shared_ptr<std::string> username_;
    std::shared_ptr<std::string> hashPassword_;
    std::shared_ptr<std::string> salt_;
    std::shared_ptr<bool> isAdmin_;
    std::shared_ptr<int64_t> createdAt_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[6]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where user_id = $1";
        return sql;
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where user_id = $1";
        return sql;
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
            sql += "user_id,";
            ++parametersCount;
        if(dirtyFlag_[1])
        {
            sql += "username,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "hash_password,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "salt,";
            ++parametersCount;
        }
        sql += "is_admin,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "created_at,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        needSelection=true;
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";

        int placeholder=1;
        char placeholderStr[64];
        size_t n=0;
        sql +="default,";
        if(dirtyFlag_[1])
        {
            n = snprintf(placeholderStr,sizeof(placeholderStr),"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[2])
        {
            n = snprintf(placeholderStr,sizeof(placeholderStr),"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[3])
        {
            n = snprintf(placeholderStr,sizeof(placeholderStr),"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[4])
        {
            n = snprintf(placeholderStr,sizeof(placeholderStr),"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[5])
        {
            n = snprintf(placeholderStr,sizeof(placeholderStr),"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        else
        {
            sql +="default,";
        }
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        if(needSelection)
        {
            sql.append(") returning *");
        }
        else
        {
            sql.append(1, ')');
        }
        LOG_TRACE << sql;
        return sql;
    }
};
} // namespace drogon_test
} // namespace drogon_model
