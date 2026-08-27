// Function: FUN_14032d3c0
// Addr: 14032d3c0
// Size: 208 bytes


undefined8 FUN_14032d3c0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x50) != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    plVar3 = (longlong *)FUN_1402f7910(param_2,*(undefined8 *)(lVar2 + 0x70));
    if ((plVar3 != (longlong *)0x0) &&
       (lVar2 = *(longlong *)(lVar2 + 0x58) + *plVar3 * 0x18, lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == 1) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 2) {
        *param_3 = 2;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 3) {
        *param_3 = 3;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
    }
  }
  return 6;
}

