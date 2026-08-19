// Function: FUN_140060a60
// Addr: 140060a60
// Size: 124 bytes


/* WARNING: Removing unreachable block (ram,0x000140060c35) */
/* WARNING: Removing unreachable block (ram,0x000140060c42) */
/* WARNING: Removing unreachable block (ram,0x000140060c57) */
/* WARNING: Removing unreachable block (ram,0x000140060c68) */
/* WARNING: Removing unreachable block (ram,0x000140060c73) */
/* WARNING: Removing unreachable block (ram,0x000140060bf6) */
/* WARNING: Removing unreachable block (ram,0x000140060c0b) */
/* WARNING: Removing unreachable block (ram,0x000140060c20) */
/* WARNING: Removing unreachable block (ram,0x000140060c2b) */
/* WARNING: Removing unreachable block (ram,0x000140060c7d) */
/* WARNING: Removing unreachable block (ram,0x000140060c87) */
/* WARNING: Removing unreachable block (ram,0x000140060c97) */
/* WARNING: Removing unreachable block (ram,0x000140060cc2) */
/* WARNING: Removing unreachable block (ram,0x000140060ca8) */
/* WARNING: Removing unreachable block (ram,0x000140060caf) */

undefined4 * FUN_140060a60(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    local_28 = 0;
    local_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_140016240(&local_38,&DAT_140474608,0);
    *param_1 = (undefined4)local_38;
    param_1[1] = local_38._4_4_;
    param_1[2] = (undefined4)uStack_30;
    param_1[3] = uStack_30._4_4_;
    param_1[4] = (undefined4)local_28;
    param_1[5] = local_28._4_4_;
    param_1[6] = (undefined4)local_20;
    param_1[7] = local_20._4_4_;
    return param_1;
  }
  puVar1 = (undefined4 *)func_0x000140421ed0(param_2);
  return puVar1;
}

