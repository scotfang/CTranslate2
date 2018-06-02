#pragma once

#include <string>
#include <unordered_map>
#include <vector>

namespace opennmt {

  class Vocabulary
  {
  public:
    static const std::string unk_token;

    Vocabulary(const char* path);

    const std::string& to_token(size_t id) const;
    size_t to_id(const std::string& token) const;
    size_t size() const;

  private:
    std::vector<std::string> _id_to_token;
    std::unordered_map<std::string, size_t> _token_to_id;
  };

}
