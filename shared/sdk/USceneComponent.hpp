#pragma once

#include <sdk/Math.hpp>

#include "UObject.hpp"
#include "UActorComponent.hpp"

namespace sdk {
class USceneComponent : public UActorComponent {
public:
    static UClass* static_class();

public:
    void set_world_rotation(const glm::vec3& rotation, bool sweep = false, bool teleport = false);
    void add_world_rotation(const glm::vec3& rotation, bool sweep = false, bool teleport = false);
    void set_world_location(const glm::vec3& location, bool sweep = false, bool teleport = false);
    void add_world_offset(const glm::vec3& offset, bool sweep = false, bool teleport = false);
    void add_local_rotation(const glm::vec3& rotation, bool sweep = false, bool teleport = false);

    glm::vec3 get_world_location();
    glm::vec3 get_world_rotation();

    bool attach_to(USceneComponent* parent, const std::wstring& socket_name = L"None", uint8_t attach_type = 0, bool weld = false);
    void set_hidden_in_game(bool hidden, bool propagate_to_children = true);
};
}