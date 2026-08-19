// Function: FUN_14018c690
// Addr: 14018c690
// Size: 140 bytes


undefined8 FUN_14018c690(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  longlong lStack_48;
  ulonglong uStack_40;
  undefined1 local_38 [48];
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x118) - lVar1 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + (longlong)iVar8 * 8);
      if (param_2 == lVar2) {
        func_0x000140085160(local_38,lVar2 + 0x1b0);
        local_60 = 2;
        puStack_68 = &DAT_14048e68c;
        FUN_1400879c0(local_38,&puStack_68);
        FUN_140004dd0(&uStack_58,local_38,0);
        puVar5 = (undefined1 *)CONCAT71(uStack_57,uStack_58);
        if (param_3 != (longlong *)0x0) {
          puVar6 = &uStack_58;
          if (0xf < uStack_40) {
            puVar6 = puVar5;
          }
          if (*param_3 != 0) {
            (*(code *)param_3[1])(*param_3,puVar6,puVar6 + lStack_48);
            puVar5 = (undefined1 *)CONCAT71(uStack_57,uStack_58);
          }
        }
        if (0xf < uStack_40) {
          uVar7 = uStack_40 + 1;
          puVar6 = puVar5;
          if (0xfff < uVar7) {
            puVar6 = *(undefined1 **)(puVar5 + -8);
            if ((undefined1 *)0x1f < puVar5 + (-8 - (longlong)puVar6)) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              uVar4 = (*pcVar3)();
              return uVar4;
            }
            uVar7 = uStack_40 + 0x28;
          }
          func_0x00014028b040(puVar6,uVar7);
        }
        lStack_48 = 0;
        uStack_40 = 0xf;
        uStack_58 = 0;
        func_0x000140085510(local_38);
        return 1;
      }
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(*(longlong *)(param_1 + 0x118) - lVar1 >> 3));
  }
  return 0;
}

