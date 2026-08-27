// Function: FUN_1401c0540
// Addr: 1401c0540
// Size: 509 bytes


void FUN_1401c0540(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  undefined4 *puVar3;
  double *pdVar4;
  uint uVar5;
  float fVar6;
  double local_68;
  uint local_60;
  double local_58;
  double local_50;
  double local_48;
  
  FUN_1401c00a0();
  lVar2 = FUN_140087490(param_1,"plane","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,4);
    uVar5 = local_60 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_68,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_68);
    }
    *puVar3 = 5;
    puVar3[1] = DAT_14048f6d0;
    *(undefined1 *)(puVar3 + 2) = DAT_14048f6d4;
    *(undefined1 *)((longlong)puVar3 + 9) = 0;
    pdVar4 = (double *)FUN_140086de0(param_1,"plane","");
    local_60 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar5;
    local_68 = *pdVar4;
    *pdVar4 = (double)puVar3;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_48 = pdVar4[4];
    local_50 = pdVar4[3];
    pdVar4[3] = 0.0;
    pdVar4[4] = 0.0;
    local_58 = dVar1;
    FUN_140086d30(&local_68);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar6 = DAT_140492a14;
  if (param_2 == '\0') {
    fVar6 = 0.0;
  }
  lVar2 = FUN_140087490(param_1,"distance","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,3);
    uVar5 = local_60 & 0xfffffeff;
    pdVar4 = (double *)FUN_140086de0(param_1,"distance","");
    local_60 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar5;
    local_68 = *pdVar4;
    *pdVar4 = (double)fVar6;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_50 = pdVar4[3];
    pdVar4[3] = 0.0;
    local_48 = pdVar4[4];
    pdVar4[4] = 0.0;
    local_58 = dVar1;
    FUN_140086d30(&local_68);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  return;
}

