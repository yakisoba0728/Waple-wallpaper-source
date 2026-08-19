// Function: FUN_14003fd50
// Addr: 14003fd50
// Size: 52 bytes


undefined8 * FUN_14003fd50(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar3 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar2 = psVar3;
  for (psVar1 = (short *)FUN_140015f60(puVar4); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) goto code_r0x00014003fda0;
  }
LAB_14003fdbf:
  psVar1 = (short *)func_0x00014028f010(psVar3);
  if ((psVar3 != psVar1) && (psVar2 = psVar1 + -1, psVar3 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar3 != psVar1 + -2) || (psVar1[-2] != 0x2e)) {
code_r0x00014003fdf3:
        psVar1 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar1 + -2; psVar3 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto code_r0x00014003fdf3;
      }
    }
  }
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_140016240(&uStack_28,psVar3,(longlong)psVar1 - (longlong)psVar3 >> 1);
  *param_2 = uStack_28;
  param_2[1] = uStack_20;
  param_2[2] = uStack_18;
  param_2[3] = uStack_10;
  return param_2;
code_r0x00014003fda0:
  psVar2 = psVar3 + -1;
  if (psVar3[-1] == 0x5c) goto LAB_14003fdbf;
  if ((psVar3[-1] == 0x2f) || (psVar3 = psVar2, psVar1 == psVar2)) goto LAB_14003fdbf;
  goto code_r0x00014003fda0;
}

