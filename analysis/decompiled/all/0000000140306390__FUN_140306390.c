// Function: FUN_140306390
// Addr: 140306390
// Size: 195 bytes


ulonglong FUN_140306390(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + 4;
  if (puVar2 <= param_2) {
    if (CONCAT11(*param_1,param_1[1]) == 1) {
      uVar3 = (uint)CONCAT11(param_1[2],param_1[3]);
      if (puVar2 + uVar3 * 2 <= param_2) {
LAB_140306443:
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar3;
        }
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
    }
    else if ((CONCAT11(*param_1,param_1[1]) == 2) &&
            (puVar1 = puVar2 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 6, puVar1 <= param_2)) {
      uVar3 = 0;
      for (; puVar2 < puVar1; puVar2 = puVar2 + 6) {
        if ((uint)CONCAT11(puVar2[2],puVar2[3]) < (uint)CONCAT11(*puVar2,puVar2[1]))
        goto LAB_1403063d5;
        uVar3 = uVar3 + 1 +
                ((uint)CONCAT11(puVar2[2],puVar2[3]) - (uint)CONCAT11(*puVar2,puVar2[1]));
      }
      goto LAB_140306443;
    }
  }
LAB_1403063d5:
  return (ulonglong)puVar2 & 0xffffffffffffff00;
}

