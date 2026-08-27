// Function: FUN_140056220
// Addr: 140056220
// Size: 1251 bytes


void FUN_140056220(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 local_c8;
  uint local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined1 local_70 [48];
  
  FUN_140056b20();
  cVar1 = *(char *)(**(longlong **)(param_1 + 8) + 0x19);
  plVar2 = (longlong *)**(longlong **)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      FUN_140290ea0(param_1 + 0x28);
      return;
    }
    uVar9 = local_98 >> 8;
    local_98 = CONCAT31((int3)uVar9,7);
    local_98 = local_98 & 0xfffffeff;
    plVar8 = plVar2 + 4;
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    local_c0 = CONCAT31(local_c0._1_3_,4);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    uVar9 = *(uint *)(plVar2 + 6);
    uVar10 = (ulonglong)uVar9;
    if (0xf < (ulonglong)plVar2[7]) {
      plVar8 = (longlong *)*plVar8;
    }
    local_a0 = plVar3;
    puVar5 = (uint *)_malloc_base(uVar10 + 5);
    if (puVar5 == (uint *)0x0) break;
    *puVar5 = uVar9;
    uVar9 = local_c0 | 0x100;
    FUN_1404210f0(puVar5 + 1,plVar8,uVar10);
    *(undefined1 *)(uVar10 + 4 + (longlong)puVar5) = 0;
    puVar6 = (undefined8 *)FUN_140086de0(&local_a0,&DAT_1404776e4);
    local_c0 = *(uint *)(puVar6 + 1);
    *(uint *)(puVar6 + 1) = uVar9;
    local_c8 = *puVar6;
    *puVar6 = puVar5;
    lVar4 = puVar6[2];
    puVar6[2] = 0;
    local_a8 = puVar6[4];
    local_b0 = puVar6[3];
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_b8 = lVar4;
    FUN_140086d30(&local_c8);
    if (lVar4 != 0) {
      FUN_140017240(lVar4 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    plVar8 = plVar2 + 10;
    uVar9 = *(uint *)(plVar2 + 0xc);
    uVar10 = (ulonglong)uVar9;
    local_c0 = CONCAT31(local_c0._1_3_,4);
    if (0xf < (ulonglong)plVar2[0xd]) {
      plVar8 = (longlong *)*plVar8;
    }
    puVar5 = (uint *)_malloc_base(uVar10 + 5);
    if (puVar5 == (uint *)0x0) {
      FUN_140017170(&local_a0,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_a0);
    }
    *puVar5 = uVar9;
    uVar9 = local_c0 | 0x100;
    FUN_1404210f0(puVar5 + 1,plVar8,uVar10);
    *(undefined1 *)(uVar10 + 4 + (longlong)puVar5) = 0;
    puVar6 = (undefined8 *)FUN_140086de0(&local_a0,&DAT_140473b68,&DAT_140473b6c);
    local_c0 = *(uint *)(puVar6 + 1);
    *(uint *)(puVar6 + 1) = uVar9;
    local_c8 = *puVar6;
    *puVar6 = puVar5;
    lVar4 = puVar6[2];
    puVar6[2] = 0;
    local_a8 = puVar6[4];
    local_b0 = puVar6[3];
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_b8 = lVar4;
    FUN_140086d30(&local_c8);
    if (lVar4 != 0) {
      FUN_140017240(lVar4 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    local_c0 = CONCAT31(local_c0._1_3_,5);
    uVar9 = local_c0 & 0xfffffeff;
    local_c8 = CONCAT71(local_c8._1_7_,plVar2[9] != 0);
    puVar6 = (undefined8 *)FUN_140086de0(&local_a0,"status","");
    local_c0 = *(uint *)(puVar6 + 1);
    *(uint *)(puVar6 + 1) = uVar9;
    uVar7 = *puVar6;
    *puVar6 = local_c8;
    local_b8 = puVar6[2];
    puVar6[2] = 0;
    local_b0 = puVar6[3];
    local_a8 = puVar6[4];
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_c8 = uVar7;
    FUN_140085440(&local_c8);
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      uVar7 = (**(code **)(*(longlong *)plVar2[9] + 0x30))();
      FUN_140084f50(&local_c8,uVar7);
      uVar7 = FUN_140086de0(&local_a0,&DAT_1404748b8,&DAT_1404748bc);
      FUN_140085610(uVar7,&local_c8);
      FUN_140085440(&local_c8);
      uVar7 = (**(code **)(*(longlong *)plVar2[9] + 0x38))();
      FUN_140084f50(&local_c8,uVar7);
      uVar7 = FUN_140086de0(&local_a0,"description","");
      FUN_140085610(uVar7,&local_c8);
      FUN_140085440(&local_c8);
      uVar7 = (**(code **)(*(longlong *)plVar2[9] + 0x40))();
      FUN_140084f50(&local_c8,uVar7);
      uVar7 = FUN_140086de0(&local_a0,"version","");
      FUN_140085610(uVar7,&local_c8);
      FUN_140085440(&local_c8);
      local_78 = &PTR_FUN_1404776f8;
      FUN_140084dd0(local_70,0);
      (**(code **)(*(longlong *)plVar2[9] + 0x50))((longlong *)plVar2[9],&local_78);
      uVar7 = FUN_140086de0(&local_a0,"options","");
      FUN_140085520(uVar7,local_70);
      FUN_140085440(local_70);
    }
    uVar7 = FUN_140085090(&local_c8,&local_a0);
    FUN_140087690(param_2,uVar7);
    FUN_140085440(&local_c8);
    if ((byte)local_98 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140056619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&LAB_14005673c + (ulonglong)(byte)local_98 * 4)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&LAB_14005673c + (ulonglong)(byte)local_98 * 4));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar4 = local_90;
    if (local_90 != 0) {
      FUN_140017240(local_90 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    plVar8 = (longlong *)plVar2[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      while (cVar1 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar1 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar2[1] + 0x19);
      plVar3 = (longlong *)plVar2[1];
      while ((plVar8 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar3 = (longlong *)plVar8[1];
        plVar2 = plVar8;
      }
    }
    cVar1 = *(char *)((longlong)plVar8 + 0x19);
    plVar2 = plVar8;
  }
  FUN_140017170(&local_a0,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(&local_a0);
}

