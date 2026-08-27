// Function: FUN_1402f81e0
// Addr: 1402f81e0
// Size: 182 bytes


longlong FUN_1402f81e0(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = 0;
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
    }
    if ((param_3 != '\0') && (lVar3 == 0)) {
      lVar3 = param_1[1];
      uVar1 = *(uint *)(lVar3 + 0x14);
      puVar5 = (undefined8 *)(lVar3 + 0x18);
      lVar4 = 0;
      while ((puVar5 < (undefined8 *)(lVar3 + ((ulonglong)uVar1 + 3) * 8) &&
             (((plVar2 = (longlong *)*puVar5, plVar2 == param_1 ||
               (*(code **)(*plVar2 + 0x30) == (code *)0x0)) ||
              (lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), lVar4 == 0))))) {
        puVar5 = puVar5 + 1;
      }
      return lVar4;
    }
  }
  return lVar3;
}

