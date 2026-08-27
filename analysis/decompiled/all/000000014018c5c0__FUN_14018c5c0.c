// Function: FUN_14018c5c0
// Addr: 14018c5c0
// Size: 352 bytes


undefined8 FUN_14018c5c0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38 [48];
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x118) - lVar1 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + (longlong)iVar8 * 8);
      if (param_2 == lVar2) {
        FUN_140085090(local_38,lVar2 + 0x1b0);
        local_60 = 2;
        local_68 = &DAT_14048e5bc;
        FUN_1400878f0(local_38,&local_68);
        FUN_140004d00(&local_58,local_38,0);
        puVar5 = (undefined1 *)CONCAT71(uStack_57,local_58);
        if (param_3 != (longlong *)0x0) {
          puVar6 = &local_58;
          if (0xf < local_40) {
            puVar6 = puVar5;
          }
          if (*param_3 != 0) {
            (*(code *)param_3[1])(*param_3,puVar6,puVar6 + local_48);
            puVar5 = (undefined1 *)CONCAT71(uStack_57,local_58);
          }
        }
        if (0xf < local_40) {
          uVar7 = local_40 + 1;
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
            uVar7 = local_40 + 0x28;
          }
          thunk_FUN_14028af80(puVar6,uVar7);
        }
        local_48 = 0;
        local_40 = 0xf;
        local_58 = 0;
        FUN_140085440(local_38);
        return 1;
      }
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(*(longlong *)(param_1 + 0x118) - lVar1 >> 3));
  }
  return 0;
}

