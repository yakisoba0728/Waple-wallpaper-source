// Function: FUN_14029dba0
// Addr: 14029dba0
// Size: 101 bytes


undefined8 * FUN_14029dba0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = param_1 + 2;
  *param_1 = std::
             time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
             ::vftable;
  *puVar1 = 0;
  uVar2 = FUN_1402d8738();
  if (puVar1 != local_18) {
    thunk_FUN_1402d9040(*puVar1);
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  thunk_FUN_1402d9040(uVar2);
  return param_1;
}

