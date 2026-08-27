// Function: FUN_140158510
// Addr: 140158510
// Size: 211 bytes


void FUN_140158510(longlong param_1,longlong param_2,char *param_3)

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
  
  puVar3 = DAT_1404e9370;
  puVar2 = DAT_1404e9368;
  if (param_3 != (char *)0x0) {
    iVar1 = *(int *)(param_2 + 4);
    for (puVar7 = DAT_1404e9368; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      sVar6 = strlen(param_3);
      _Size = puVar7[2];
      _Buf1 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        _Buf1 = (undefined8 *)*puVar7;
      }
      if ((_Size == sVar6) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,param_3,_Size), iVar5 == 0)))) {
        uVar4 = *(undefined1 *)(puVar7 + 4);
        goto LAB_14015859f;
      }
    }
    uVar4 = *(undefined1 *)(puVar2 + 4);
LAB_14015859f:
    *(undefined1 *)(iVar1 + param_1) = uVar4;
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401585d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x28))(param_1,param_2);
    return;
  }
  return;
}

