// Function: FUN_140158670
// Addr: 140158670
// Size: 211 bytes


void FUN_140158670(longlong param_1,longlong param_2,char *param_3)

{
  int iVar1;
  size_t _Size;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  
  puVar3 = DAT_1404e9380;
  puVar2 = DAT_1404e9378;
  if (param_3 != (char *)0x0) {
    iVar1 = *(int *)(param_2 + 4);
    for (puVar7 = DAT_1404e9378; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      sVar6 = strlen(param_3);
      _Size = puVar7[2];
      _Buf1 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        _Buf1 = (undefined8 *)*puVar7;
      }
      if ((_Size == sVar6) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,param_3,_Size), iVar5 == 0)))) {
        uVar4 = *(undefined1 *)(puVar7 + 4);
        goto LAB_1401586ff;
      }
    }
    uVar4 = *(undefined1 *)(puVar2 + 4);
LAB_1401586ff:
    *(undefined1 *)(iVar1 + param_1) = uVar4;
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140158732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x28))(param_1,param_2);
    return;
  }
  return;
}

