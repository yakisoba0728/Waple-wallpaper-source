// Function: FUN_14018f7d0
// Addr: 14018f7d0
// Size: 1127 bytes


ulonglong FUN_14018f7d0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  longlong local_a8 [4];
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 ***local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  if ((*(uint *)(param_1 + 0x98) >> 0x1c & 1) == 0) {
    return 2;
  }
  lVar8 = *(longlong *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xefffffff;
  sVar4 = strlen(param_2);
  lVar5 = FUN_140087490(lVar8 + 0x1718,param_2,param_2 + sVar4);
  if (lVar5 != 0) {
    sVar4 = strlen(param_2);
    uVar6 = FUN_140086de0(lVar8 + 0x1718,param_2,param_2 + sVar4);
    lVar5 = FUN_140087490(uVar6,"value","");
    if (lVar5 != 0) {
      lVar5 = FUN_140086de0(uVar6,"value","");
      if (*(char *)(lVar5 + 8) == '\x04') {
        local_a8[2] = 0;
        local_a8[1] = 0;
        uStack_80 = 0;
        local_a8[0] = 0;
        uStack_60 = 0;
        local_88 = (undefined8 ****)0x0;
        uStack_40 = 0;
        local_68 = (undefined8 ****)0x0;
        local_48 = (undefined8 ****)0x0;
        local_a8[3] = 0xf;
        local_78 = 0;
        local_70 = 0xf;
        local_58 = 0;
        local_50 = 0xf;
        local_38 = 0;
        local_30 = 0xf;
        uVar6 = FUN_140086de0(uVar6,"value","");
        uVar6 = FUN_140085cc0(uVar6,local_28);
        cVar3 = FUN_1401708c0(uVar6,local_a8);
        if (0xf < local_10) {
          uVar9 = local_10 + 1;
          lVar5 = local_28[0];
          if (0xfff < uVar9) {
            lVar5 = *(longlong *)(local_28[0] + -8);
            if (0x1f < (local_28[0] - lVar5) - 8U) goto LAB_14018fc2f;
            uVar9 = local_10 + 0x28;
          }
          thunk_FUN_14028af80(lVar5,uVar9);
        }
        if (cVar3 != '\0') {
          ppppuVar7 = &local_48;
          if (0xf < local_30) {
            ppppuVar7 = (undefined8 ****)local_48;
          }
          plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x1710) + 0x158);
          ppppuVar11 = &local_68;
          if (0xf < local_50) {
            ppppuVar11 = (undefined8 ****)local_68;
          }
          ppppuVar10 = &local_88;
          if (0xf < local_70) {
            ppppuVar10 = (undefined8 ****)local_88;
          }
          cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,ppppuVar10,ppppuVar11,ppppuVar7);
          if (0xf < local_30) {
            uVar9 = local_30 + 1;
            ppppuVar7 = (undefined8 ****)local_48;
            if (0xfff < uVar9) {
              ppppuVar7 = (undefined8 ****)local_48[-1];
              if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar7)))
              goto LAB_14018fc2f;
              uVar9 = local_30 + 0x28;
            }
            thunk_FUN_14028af80(ppppuVar7,uVar9);
          }
          local_38 = 0;
          local_30 = 0xf;
          local_48 = (undefined8 ***)((ulonglong)local_48 & 0xffffffffffffff00);
          if (0xf < local_50) {
            uVar9 = local_50 + 1;
            ppppuVar7 = (undefined8 ****)local_68;
            if (0xfff < uVar9) {
              ppppuVar7 = (undefined8 ****)local_68[-1];
              if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar7)))
              goto LAB_14018fc2f;
              uVar9 = local_50 + 0x28;
            }
            thunk_FUN_14028af80(ppppuVar7,uVar9);
          }
          local_58 = 0;
          local_50 = 0xf;
          local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffffff00);
          if (0xf < local_70) {
            uVar9 = local_70 + 1;
            ppppuVar7 = (undefined8 ****)local_88;
            if (0xfff < uVar9) {
              ppppuVar7 = (undefined8 ****)local_88[-1];
              if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))
              goto LAB_14018fc2f;
              uVar9 = local_70 + 0x28;
            }
            thunk_FUN_14028af80(ppppuVar7,uVar9);
          }
          local_78 = 0;
          local_70 = 0xf;
          local_88 = (undefined8 ***)((ulonglong)local_88 & 0xffffffffffffff00);
          if (0xf < (ulonglong)local_a8[3]) {
            uVar9 = local_a8[3] + 1;
            lVar8 = local_a8[0];
            if (0xfff < uVar9) {
              lVar8 = *(longlong *)(local_a8[0] + -8);
              if (0x1f < (local_a8[0] - lVar8) - 8U) {
LAB_14018fc2f:
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              uVar9 = local_a8[3] + 0x28;
            }
            thunk_FUN_14028af80(lVar8,uVar9);
          }
          goto LAB_14018fbfe;
        }
        if (0xf < local_30) {
          uVar9 = local_30 + 1;
          ppppuVar7 = (undefined8 ****)local_48;
          if (0xfff < uVar9) {
            ppppuVar7 = (undefined8 ****)local_48[-1];
            if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar7)))
            goto LAB_14018fc2f;
            uVar9 = local_30 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar7,uVar9);
        }
        local_38 = 0;
        local_30 = 0xf;
        local_48 = (undefined8 ***)((ulonglong)local_48 & 0xffffffffffffff00);
        if (0xf < local_50) {
          uVar9 = local_50 + 1;
          ppppuVar7 = (undefined8 ****)local_68;
          if (0xfff < uVar9) {
            ppppuVar7 = (undefined8 ****)local_68[-1];
            if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar7)))
            goto LAB_14018fc2f;
            uVar9 = local_50 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar7,uVar9);
        }
        local_58 = 0;
        local_50 = 0xf;
        local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffffff00);
        if (0xf < local_70) {
          uVar9 = local_70 + 1;
          ppppuVar7 = (undefined8 ****)local_88;
          if (0xfff < uVar9) {
            ppppuVar7 = (undefined8 ****)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))
            goto LAB_14018fc2f;
            uVar9 = local_70 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar7,uVar9);
        }
        local_78 = 0;
        local_70 = 0xf;
        local_88 = (undefined8 ***)((ulonglong)local_88 & 0xffffffffffffff00);
        if (0xf < (ulonglong)local_a8[3]) {
          uVar9 = local_a8[3] + 1;
          lVar8 = local_a8[0];
          if (0xfff < uVar9) {
            lVar8 = *(longlong *)(local_a8[0] + -8);
            if (0x1f < (local_a8[0] - lVar8) - 8U) goto LAB_14018fc2f;
            uVar9 = local_a8[3] + 0x28;
          }
          thunk_FUN_14028af80(lVar8,uVar9);
        }
      }
    }
  }
  cVar3 = '\0';
LAB_14018fbfe:
  return (ulonglong)(cVar3 != '\0');
}

