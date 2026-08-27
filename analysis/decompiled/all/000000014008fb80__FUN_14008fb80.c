// Function: FUN_14008fb80
// Addr: 14008fb80
// Size: 471 bytes


undefined8 FUN_14008fb80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar10 = auStack_b8;
  local_80 = 0xf;
  uStack_90 = 0;
  local_98 = (undefined8 ****)0x0;
  local_88 = 0;
  cVar5 = FUN_14008fd60(0,param_2,&local_98);
  uVar8 = local_88;
  if (cVar5 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar4 = (undefined4)local_88;
    uVar12 = local_88 & 0xffffffff;
    local_58 = 0;
    local_70 = CONCAT31(local_70._1_3_,4);
    uVar11 = local_70 | 0x100;
    local_68 = 0;
    uStack_60 = 0;
    ppppuVar7 = &local_98;
    if (0xf < local_80) {
      ppppuVar7 = (undefined8 ****)local_98;
    }
    puVar6 = (undefined4 *)_malloc_base(uVar12 + 5);
    if (puVar6 == (undefined4 *)0x0) goto LAB_14008fd3c;
    *puVar6 = uVar4;
    FUN_1404210f0(puVar6 + 1,ppppuVar7,uVar8 & 0xffffffff);
    lVar1 = *(longlong *)(param_1 + 8);
    uVar8 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(undefined1 *)((longlong)puVar6 + uVar12 + 4) = 0;
    plVar2 = *(longlong **)
              (*(longlong *)(lVar1 + (*(longlong *)(param_1 + 0x10) - 1U & uVar8 >> 1) * 8) +
              (ulonglong)((uint)uVar8 & 1) * 8);
    local_70 = *(uint *)(plVar2 + 1);
    *(uint *)(plVar2 + 1) = uVar11;
    local_78 = *plVar2;
    *plVar2 = (longlong)puVar6;
    uVar8 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar8 >> 1) * 8) +
       (ulonglong)((uint)uVar8 & 1) * 8) + 0x18) =
         *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x70);
    uVar8 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    uVar9 = 1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar8 >> 1) * 8) +
       (ulonglong)((uint)uVar8 & 1) * 8) + 0x20) =
         *(longlong *)(param_2 + 0x10) - *(longlong *)(param_1 + 0x70);
    FUN_140086d30(&local_78);
  }
  if (0xf < local_80) {
    uVar8 = local_80 + 1;
    ppppuVar7 = (undefined8 ****)local_98;
    if (0xfff < uVar8) {
      ppppuVar7 = (undefined8 ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppuVar7))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_b0;
LAB_14008fd3c:
        *(undefined8 *)(puVar10 + -8) = 0x14008fd4d;
        FUN_140017170(puVar10 + 0x40,
                      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                     );
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_14008fd57;
        FUN_140084bc0(puVar10 + 0x40);
      }
      uVar8 = local_80 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar7,uVar8);
  }
  return uVar9;
}

