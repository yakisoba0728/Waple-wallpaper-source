// Function: FUN_14009c800
// Addr: 14009c800
// Size: 150 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009c800(undefined1 (*param_1) [16],ulonglong param_2,undefined8 param_3,
                  undefined8 param_4,undefined1 (*param_5) [16],ulonglong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  
  auVar5 = _DAT_140492d60;
  if (param_2 < param_6) {
    param_6 = param_2;
  }
  param_6 = param_6 >> 2;
  while (3 < param_6) {
    auVar6 = lddqu(in_XMM0,*param_5);
    param_5 = param_5 + 1;
    param_6 = param_6 - 4;
    in_XMM0 = pshufb(auVar6,auVar5);
    *param_1 = in_XMM0;
    param_1 = param_1 + 1;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = (*param_5)[0];
    uVar2 = (*param_5)[1];
    uVar3 = (*param_5)[3];
    puVar4 = *param_5;
    param_5 = (undefined1 (*) [16])(*param_5 + 4);
    (*param_1)[0] = puVar4[2];
    (*param_1)[1] = uVar2;
    (*param_1)[2] = uVar1;
    (*param_1)[3] = uVar3;
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
  }
  return;
}

