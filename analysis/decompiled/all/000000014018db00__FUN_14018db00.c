// Function: FUN_14018db00
// Addr: 14018db00
// Size: 334 bytes


undefined8 * FUN_14018db00(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  plVar9 = *(longlong **)(lVar1 + 6000);
  plVar2 = *(longlong **)(lVar1 + 0x1778);
  do {
    if (plVar9 == plVar2) {
      return (undefined8 *)0x0;
    }
    lVar3 = *plVar9;
    if ((param_2 == 0) ||
       (lVar6 = (**(code **)(**(longlong **)(lVar3 + 8) + 8))(), lVar6 == param_2)) {
      puVar8 = (undefined8 *)(lVar3 + 0x68);
      sVar7 = strlen(param_3);
      sVar4 = *(size_t *)(lVar3 + 0x78);
      if (0xf < *(ulonglong *)(lVar3 + 0x80)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      if ((sVar4 == sVar7) && ((sVar4 == 0 || (iVar5 = memcmp(puVar8,param_3,sVar4), iVar5 == 0))))
      {
LAB_14018dbd3:
        if (*(undefined8 **)(lVar3 + 0xf8) != (undefined8 *)0x0) {
          return *(undefined8 **)(lVar3 + 0xf8);
        }
        puVar8 = (undefined8 *)FUN_14028af20();
        lVar1 = *(longlong *)(lVar1 + 0x1710);
        puVar8[1] = 0;
        puVar8[2] = lVar1 + 0x1c88;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        *puVar8 = &PTR_FUN_14048dfa8;
        FUN_140153760(puVar8 + 9);
        puVar8[0x19] = lVar3;
        *(undefined4 *)(puVar8 + 0x1a) = 0x3f800000;
        *(undefined8 **)(lVar3 + 0xf8) = puVar8;
        return puVar8;
      }
      lVar6 = *(longlong *)(lVar3 + 0x10);
      puVar8 = (undefined8 *)(lVar6 + 0x38);
      sVar4 = *(size_t *)(lVar6 + 0x48);
      if (0xf < *(ulonglong *)(lVar6 + 0x50)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      if ((sVar4 == sVar7) && ((sVar4 == 0 || (iVar5 = memcmp(puVar8,param_3,sVar4), iVar5 == 0))))
      goto LAB_14018dbd3;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}

