#ifndef OPENMW_ACTORAPI_HPP
#define OPENMW_ACTORAPI_HPP

#include "../api.h"

#define ACTORAPI \
    {"ReadReceivedActorList",                  ActorFunctions::ReadReceivedActorList},\
    {"ReadCellActorList",                      ActorFunctions::ReadCellActorList},\
    \
    {"ClearActorList",                         ActorFunctions::ClearActorList},\
    {"SetActorListPid",                        ActorFunctions::SetActorListPid},\
    \
    {"CopyReceivedActorListToStore",           ActorFunctions::CopyReceivedActorListToStore},\
    \
    {"GetActorListSize",                       ActorFunctions::GetActorListSize},\
    {"GetActorListAction",                     ActorFunctions::GetActorListAction},\
    \
    {"GetActorCell",                           ActorFunctions::GetActorCell},\
    {"GetActorRefId",                          ActorFunctions::GetActorRefId},\
    {"GetActorRefNum",                         ActorFunctions::GetActorRefNum},\
    {"GetActorMpNum",                          ActorFunctions::GetActorMpNum},\
    \
    {"GetActorPosX",                           ActorFunctions::GetActorPosX},\
    {"GetActorPosY",                           ActorFunctions::GetActorPosY},\
    {"GetActorPosZ",                           ActorFunctions::GetActorPosZ},\
    {"GetActorRotX",                           ActorFunctions::GetActorRotX},\
    {"GetActorRotY",                           ActorFunctions::GetActorRotY},\
    {"GetActorRotZ",                           ActorFunctions::GetActorRotZ},\
    \
    {"GetActorHealthBase",                     ActorFunctions::GetActorHealthBase},\
    {"GetActorHealthCurrent",                  ActorFunctions::GetActorHealthCurrent},\
    {"GetActorHealthModified",                 ActorFunctions::GetActorHealthModified},\
    {"GetActorMagickaBase",                    ActorFunctions::GetActorMagickaBase},\
    {"GetActorMagickaCurrent",                 ActorFunctions::GetActorMagickaCurrent},\
    {"GetActorMagickaModified",                ActorFunctions::GetActorMagickaModified},\
    {"GetActorFatigueBase",                    ActorFunctions::GetActorFatigueBase},\
    {"GetActorFatigueCurrent",                 ActorFunctions::GetActorFatigueCurrent},\
    {"GetActorFatigueModified",                ActorFunctions::GetActorFatigueModified},\
    \
    {"GetActorEquipmentItemRefId",             ActorFunctions::GetActorEquipmentItemRefId},\
    {"GetActorEquipmentItemCount",             ActorFunctions::GetActorEquipmentItemCount},\
    {"GetActorEquipmentItemCharge",            ActorFunctions::GetActorEquipmentItemCharge},\
    {"GetActorEquipmentItemEnchantmentCharge", ActorFunctions::GetActorEquipmentItemEnchantmentCharge},\
    \
    {"DoesActorHavePlayerKiller",              ActorFunctions::DoesActorHavePlayerKiller},\
    {"GetActorKillerPid",                      ActorFunctions::GetActorKillerPid},\
    {"GetActorKillerRefId",                    ActorFunctions::GetActorKillerRefId},\
    {"GetActorKillerRefNum",                   ActorFunctions::GetActorKillerRefNum},\
    {"GetActorKillerMpNum",                    ActorFunctions::GetActorKillerMpNum},\
    {"GetActorKillerName",                     ActorFunctions::GetActorKillerName},\
    \
    {"DoesActorHavePosition",                  ActorFunctions::DoesActorHavePosition},\
    {"DoesActorHaveStatsDynamic",              ActorFunctions::DoesActorHaveStatsDynamic},\
    \
    {"SetActorListCell",                       ActorFunctions::SetActorListCell},\
    {"SetActorListAction",                     ActorFunctions::SetActorListAction},\
    \
    {"SetActorCell",                           ActorFunctions::SetActorCell},\
    {"SetActorRefId",                          ActorFunctions::SetActorRefId},\
    {"SetActorRefNum",                         ActorFunctions::SetActorRefNum},\
    {"SetActorMpNum",                          ActorFunctions::SetActorMpNum},\
    \
    {"SetActorPosition",                       ActorFunctions::SetActorPosition},\
    {"SetActorRotation",                       ActorFunctions::SetActorRotation},\
    \
    {"SetActorHealthBase",                     ActorFunctions::SetActorHealthBase},\
    {"SetActorHealthCurrent",                  ActorFunctions::SetActorHealthCurrent},\
    {"SetActorHealthModified",                 ActorFunctions::SetActorHealthModified},\
    {"SetActorMagickaBase",                    ActorFunctions::SetActorMagickaBase},\
    {"SetActorMagickaCurrent",                 ActorFunctions::SetActorMagickaCurrent},\
    {"SetActorMagickaModified",                ActorFunctions::SetActorMagickaModified},\
    {"SetActorFatigueBase",                    ActorFunctions::SetActorFatigueBase},\
    {"SetActorFatigueCurrent",                 ActorFunctions::SetActorFatigueCurrent},\
    {"SetActorFatigueModified",                ActorFunctions::SetActorFatigueModified},\
    \
    {"SetActorSound",                          ActorFunctions::SetActorSound},\
    \
    {"SetActorAIAction",                       ActorFunctions::SetActorAIAction},\
    {"SetActorAITargetToPlayer",               ActorFunctions::SetActorAITargetToPlayer},\
    {"SetActorAITargetToObject",               ActorFunctions::SetActorAITargetToObject},\
    {"SetActorAICoordinates",                  ActorFunctions::SetActorAICoordinates},\
    {"SetActorAIDistance",                     ActorFunctions::SetActorAIDistance},\
    {"SetActorAIDuration",                     ActorFunctions::SetActorAIDuration},\
    {"SetActorAIRepetition",                   ActorFunctions::SetActorAIRepetition},\
    \
    {"EquipActorItem",                         ActorFunctions::EquipActorItem},\
    {"UnequipActorItem",                       ActorFunctions::UnequipActorItem},\
    \
    {"AddActor",                               ActorFunctions::AddActor},\
    \
    {"SendActorList",                          ActorFunctions::SendActorList},\
    {"SendActorAuthority",                     ActorFunctions::SendActorAuthority},\
    {"SendActorPosition",                      ActorFunctions::SendActorPosition},\
    {"SendActorStatsDynamic",                  ActorFunctions::SendActorStatsDynamic},\
    {"SendActorEquipment",                     ActorFunctions::SendActorEquipment},\
    {"SendActorSpeech",                        ActorFunctions::SendActorSpeech},\
    {"SendActorAI",                            ActorFunctions::SendActorAI},\
    {"SendActorCellChange",                    ActorFunctions::SendActorCellChange},\
    \
    {"ReadLastActorList",                      ActorFunctions::ReadLastActorList},\
    {"InitializeActorList",                    ActorFunctions::InitializeActorList},\
    {"CopyLastActorListToStore",               ActorFunctions::CopyLastActorListToStore},\
    {"GetActorRefNumIndex",                    ActorFunctions::GetActorRefNumIndex},\
    {"GetActorKillerRefNumIndex",              ActorFunctions::GetActorKillerRefNumIndex},\
    {"SetActorRefNumIndex",                    ActorFunctions::SetActorRefNumIndex}

NAMESPACE_BEGIN(ActorFunctions)
    /**
    * \brief Use the last actor list received by the server as the one being read.
    *
    * \return void
    */
    API_FUNCTION void CDECL ReadReceivedActorList() noexcept;

    /**
    * \brief Use the temporary actor list stored for a cell as the one being read.
    *
    * This type of actor list is used to store actor positions and dynamic stats and is deleted
    * when the cell is unloaded.
    *
    * \param cellDescription The description of the cell whose actor list should be read.
    * \return void
    */
    API_FUNCTION void CDECL ReadCellActorList(const char* cellDescription) noexcept;

    /**
    * \brief Clear the data from the actor list stored on the server.
    *
    * \return void
    */
    API_FUNCTION void CDECL ClearActorList() noexcept;

    /**
    * \brief Set the pid attached to the ActorList.
    *
    * \param pid The player ID to whom the actor list should be attached.
    * \return void
    */
    API_FUNCTION void CDECL SetActorListPid(unsigned short pid) noexcept;

    /**
    * \brief Take the contents of the read-only actor list last received by the
    *        server from a player and move its contents to the stored object list
    *        that can be sent by the server.
    *
    * \return void
    */
    API_FUNCTION void CDECL CopyReceivedActorListToStore() noexcept;

    /**
    * \brief Get the number of indexes in the read actor list.
    *
    * \return The number of indexes.
    */
    API_FUNCTION unsigned int CDECL GetActorListSize() noexcept;

    /**
    * \brief Get the action type used in the read actor list.
    *
    * \return The action type (0 for SET, 1 for ADD, 2 for REMOVE, 3 for REQUEST).
    */
    API_FUNCTION unsigned char CDECL GetActorListAction() noexcept;

    /**
    * \brief Get the cell description of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The cell description.
    */
    API_FUNCTION const char *CDECL GetActorCell(unsigned int index) noexcept;
    
    /**
    * \brief Get the refId of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refId.
    */
    API_FUNCTION const char *CDECL GetActorRefId(unsigned int index) noexcept;

    /**
    * \brief Get the refNum of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refNum.
    */
    API_FUNCTION unsigned int CDECL GetActorRefNum(unsigned int index) noexcept;

    /**
    * \brief Get the mpNum of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The mpNum.
    */
    API_FUNCTION unsigned int CDECL GetActorMpNum(unsigned int index) noexcept;

    /**
    * \brief Get the X position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The X position.
    */
    API_FUNCTION double CDECL GetActorPosX(unsigned int index) noexcept;

    /**
    * \brief Get the Y position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Y position.
    */
    API_FUNCTION double CDECL GetActorPosY(unsigned int index) noexcept;

    /**
    * \brief Get the Z position of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Z position.
    */
    API_FUNCTION double CDECL GetActorPosZ(unsigned int index) noexcept;

    /**
    * \brief Get the X rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The X rotation.
    */
    API_FUNCTION double CDECL GetActorRotX(unsigned int index) noexcept;

    /**
    * \brief Get the Y rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Y rotation.
    */
    API_FUNCTION double CDECL GetActorRotY(unsigned int index) noexcept;

    /**
    * \brief Get the Z rotation of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The Z rotation.
    */
    API_FUNCTION double CDECL GetActorRotZ(unsigned int index) noexcept;

    /**
    * \brief Get the base health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base health.
    */
    API_FUNCTION double CDECL GetActorHealthBase(unsigned int index) noexcept;

    /**
    * \brief Get the current health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current health.
    */
    API_FUNCTION double CDECL GetActorHealthCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified health of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified health.
    */
    API_FUNCTION double CDECL GetActorHealthModified(unsigned int index) noexcept;

    /**
    * \brief Get the base magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base magicka.
    */
    API_FUNCTION double CDECL GetActorMagickaBase(unsigned int index) noexcept;

    /**
    * \brief Get the current magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current magicka.
    */
    API_FUNCTION double CDECL GetActorMagickaCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified magicka of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified magicka.
    */
    API_FUNCTION double CDECL GetActorMagickaModified(unsigned int index) noexcept;

    /**
    * \brief Get the base fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The base fatigue.
    */
    API_FUNCTION double CDECL GetActorFatigueBase(unsigned int index) noexcept;

    /**
    * \brief Get the current fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The current fatigue.
    */
    API_FUNCTION double CDECL GetActorFatigueCurrent(unsigned int index) noexcept;

    /**
    * \brief Get the modified fatigue of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The modified fatigue.
    */
    API_FUNCTION double CDECL GetActorFatigueModified(unsigned int index) noexcept;

    /**
    * \brief Get the refId of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The refId.
    */
    API_FUNCTION const char *CDECL GetActorEquipmentItemRefId(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the count of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The item count.
    */
    API_FUNCTION int CDECL GetActorEquipmentItemCount(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the charge of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The charge.
    */
    API_FUNCTION int CDECL GetActorEquipmentItemCharge(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Get the enchantment charge of the item in a certain slot of the equipment of the actor at a
    * certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \param slot The slot of the equipment item.
    * \return The enchantment charge.
    */
    API_FUNCTION double CDECL GetActorEquipmentItemEnchantmentCharge(unsigned int index, unsigned short slot) noexcept;

    /**
    * \brief Check whether the killer of the actor at a certain index in the read actor list is a player.
    *
    * \param index The index of the actor.
    * \return Whether the actor was killed by a player.
    */
    API_FUNCTION bool CDECL DoesActorHavePlayerKiller(unsigned int index) noexcept;

    /**
    * \brief Get the player ID of the killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The player ID of the killer.
    */
    API_FUNCTION int CDECL GetActorKillerPid(unsigned int index) noexcept;

    /**
    * \brief Get the refId of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refId of the killer.
    */
    API_FUNCTION const char *CDECL GetActorKillerRefId(unsigned int index) noexcept;

    /**
    * \brief Get the refNum of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The refNum of the killer.
    */
    API_FUNCTION unsigned int CDECL GetActorKillerRefNum(unsigned int index) noexcept;

    /**
    * \brief Get the mpNum of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The mpNum of the killer.
    */
    API_FUNCTION unsigned int CDECL GetActorKillerMpNum(unsigned int index) noexcept;

    /**
    * \brief Get the name of the actor killer of the actor at a certain index in the read actor list.
    *
    * \param index The index of the actor.
    * \return The name of the killer.
    */
    API_FUNCTION const char *CDECL GetActorKillerName(unsigned int index) noexcept;

    /**
    * \brief Check whether there is any positional data for the actor at a certain index in
    * the read actor list.
    *
    * This is only useful when reading the actor list data recorded for a particular cell.
    *
    * \param index The index of the actor.
    * \return Whether the read actor list contains positional data.
    */
    API_FUNCTION bool CDECL DoesActorHavePosition(unsigned int index) noexcept;

    /**
    * \brief Check whether there is any dynamic stats data for the actor at a certain index in
    * the read actor list.
    *
    * This is only useful when reading the actor list data recorded for a particular cell.
    *
    * \param index The index of the actor.
    * \return Whether the read actor list contains dynamic stats data.
    */
    API_FUNCTION bool CDECL DoesActorHaveStatsDynamic(unsigned int index) noexcept;

    /**
    * \brief Set the cell of the temporary actor list stored on the server.
    *
    * The cell is determined to be an exterior cell if it fits the pattern of a number followed
    * by a comma followed by another number.
    *
    * \param cellDescription The description of the cell.
    * \return void
    */
    API_FUNCTION void CDECL SetActorListCell(const char* cellDescription) noexcept;

    /**
    * \brief Set the action type of the temporary actor list stored on the server.
    *
    * \param action The action type (0 for SET, 1 for ADD, 2 for REMOVE, 3 for REQUEST).
    * \return void
    */
    API_FUNCTION void CDECL SetActorListAction(unsigned char action) noexcept;

    /**
    * \brief Set the cell of the temporary actor stored on the server.
    *
    * Used for ActorCellChange packets, where a specific actor's cell now differs from that of the
    * actor list.
    *
    * The cell is determined to be an exterior cell if it fits the pattern of a number followed
    * by a comma followed by another number.
    *
    * \param cellDescription The description of the cell.
    * \return void
    */
    API_FUNCTION void CDECL SetActorCell(const char* cellDescription) noexcept;

    /**
    * \brief Set the refId of the temporary actor stored on the server.
    *
    * \param refId The refId.
    * \return void
    */
    API_FUNCTION void CDECL SetActorRefId(const char* refId) noexcept;

    /**
    * \brief Set the refNum of the temporary actor stored on the server.
    *
    * \param refNum The refNum.
    * \return void
    */
    API_FUNCTION void CDECL SetActorRefNum(int refNum) noexcept;

    /**
    * \brief Set the mpNum of the temporary actor stored on the server.
    *
    * \param mpNum The mpNum.
    * \return void
    */
    API_FUNCTION void CDECL SetActorMpNum(int mpNum) noexcept;

    /**
    * \brief Set the position of the temporary actor stored on the server.
    *
    * \param x The X position.
    * \param y The Y position.
    * \param z The Z position.
    * \return void
    */
    API_FUNCTION void CDECL SetActorPosition(double x, double y, double z) noexcept;

    /**
    * \brief Set the rotation of the temporary actor stored on the server.
    *
    * \param x The X rotation.
    * \param y The Y rotation.
    * \param z The Z rotation.
    * \return void
    */
    API_FUNCTION void CDECL SetActorRotation(double x, double y, double z) noexcept;

    /**
    * \brief Set the base health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorHealthBase(double value) noexcept;

    /**
    * \brief Set the current health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorHealthCurrent(double value) noexcept;

    /**
    * \brief Set the modified health of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorHealthModified(double value) noexcept;

    /**
    * \brief Set the base magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorMagickaBase(double value) noexcept;

    /**
    * \brief Set the current magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorMagickaCurrent(double value) noexcept;

    /**
    * \brief Set the modified magicka of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorMagickaModified(double value) noexcept;

    /**
    * \brief Set the base fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorFatigueBase(double value) noexcept;

    /**
    * \brief Set the current fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorFatigueCurrent(double value) noexcept;

    /**
    * \brief Set the modified fatigue of the temporary actor stored on the server.
    *
    * \param value The new value.
    * \return void
    */
    API_FUNCTION void CDECL SetActorFatigueModified(double value) noexcept;

    /**
    * \brief Set the sound of the temporary actor stored on the server.
    *
    * \param sound The sound.
    * \return void
    */
    API_FUNCTION void CDECL SetActorSound(const char* sound) noexcept;

    /**
    * \brief Set the AI action of the temporary actor stored on the server.
    *
    * \param action The new action.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAIAction(unsigned int action) noexcept;

    /**
    * \brief Set a player as the AI target of the temporary actor stored on the server.
    *
    * \param pid The player ID.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAITargetToPlayer(unsigned short pid) noexcept;

    /**
    * \brief Set another object as the AI target of the temporary actor stored on the server.
    *
    * \param refNum The refNum of the target object.
    * \param mpNum The mpNum of the target object.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAITargetToObject(int refNum, int mpNum) noexcept;

    /**
    * \brief Set the coordinates for the AI package associated with the current AI action.
    *
    * \param x The X coordinate.
    * \param y The Y coordinate.
    * \param z The Z coordinate.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAICoordinates(double x, double y, double z) noexcept;

    /**
    * \brief Set the distance of the AI package associated with the current AI action.
    *
    * \param duration The distance of the package.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAIDistance(unsigned int distance) noexcept;

    /**
    * \brief Set the duration of the AI package associated with the current AI action.
    *
    * \param duration The duration of the package.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAIDuration(unsigned int duration) noexcept;

    /**
    * \brief Set whether the current AI package should be repeated.
    *
    * Note: This only has an effect on the WANDER package.
    *
    * \param shouldRepeat Whether the package should be repeated.
    * \return void
    */
    API_FUNCTION void CDECL SetActorAIRepetition(bool shouldRepeat) noexcept;

    /**
    * \brief Equip an item in a certain slot of the equipment of the temporary actor stored
    * on the server.
    *
    * \param slot The equipment slot.
    * \param refId The refId of the item.
    * \param count The count of the item.
    * \param charge The charge of the item.
    * \param enchantmentCharge The enchantment charge of the item.
    * \return void
    */
    API_FUNCTION void CDECL EquipActorItem(unsigned short slot, const char* refId, unsigned int count, int charge, double enchantmentCharge = -1) noexcept;

    /**
    * \brief Unequip the item in a certain slot of the equipment of the temporary actor stored
    * on the server.
    *
    * \param slot The equipment slot.
    * \return void
    */
    API_FUNCTION void CDECL UnequipActorItem(unsigned short slot) noexcept;

    /**
    * \brief Add a copy of the server's temporary actor to the server's temporary actor list.
    *
    * In the process, the server's temporary actor will automatically be cleared so a new
    * one can be set up.
    *
    * \return void
    */
    API_FUNCTION void CDECL AddActor() noexcept;

    /**
    * \brief Send an ActorList packet.
    *
    * It is sent only to the player for whom the current actor list was initialized.
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorList() noexcept;

    /**
    * \brief Send an ActorAuthority packet.
    *
    * The player for whom the current actor list was initialized is recorded in the server memory
    * as the new actor authority for the actor list's cell.
    *
    * The packet is sent to that player as well as all other players who have the cell loaded.
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorAuthority() noexcept;

    /**
    * \brief Send an ActorPosition packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorPosition(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorStatsDynamic packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorStatsDynamic(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorEquipment packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorEquipment(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorSpeech packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    API_FUNCTION void CDECL SendActorSpeech(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorAI packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    * \return void
    */
    API_FUNCTION void CDECL SendActorAI(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;

    /**
    * \brief Send an ActorCellChange packet.
    *
    * \param sendToOtherVisitors Whether this packet should be sent to cell visitors other
    *                            than the player attached to the packet (false by default).
    * \param skipAttachedPlayer Whether the packet should skip being sent to the player attached
    *                           to the packet (false by default).
    *
    * \return void
    */
    API_FUNCTION void CDECL SendActorCellChange(bool sendToOtherVisitors, bool skipAttachedPlayer) noexcept;


    // All methods below are deprecated versions of methods from above

    API_FUNCTION void CDECL ReadLastActorList() noexcept;
    API_FUNCTION void CDECL InitializeActorList(unsigned short pid) noexcept;
    API_FUNCTION void CDECL CopyLastActorListToStore() noexcept;
    API_FUNCTION unsigned int CDECL GetActorRefNumIndex(unsigned int index) noexcept;
    API_FUNCTION unsigned int CDECL GetActorKillerRefNumIndex(unsigned int index) noexcept;
    API_FUNCTION void CDECL SetActorRefNumIndex(int refNum) noexcept;
NAMESPACE_END()


#endif //OPENMW_ACTORAPI_HPP