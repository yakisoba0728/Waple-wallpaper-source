// Function: FUN_14039b930
// Addr: 14039b930
// Size: 386 bytes


undefined4 * FUN_14039b930(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FILE *_File;
  size_t sVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0x2000;
  lVar3 = _malloc_base(0x2000);
  if (lVar3 == 0) {
    return (undefined4 *)0x0;
  }
  _File = (FILE *)FUN_1402d68c8(param_1,&DAT_14042ac58);
  puVar7 = (undefined4 *)0x0;
  lVar9 = lVar3;
  if (_File == (FILE *)0x0) {
LAB_14039ba7e:
    thunk_FUN_1402d9040(lVar9);
    return (undefined4 *)0x0;
  }
  uVar6 = 0;
  iVar1 = feof(_File);
  puVar5 = puVar7;
  if (iVar1 == 0) {
    do {
      iVar1 = (int)puVar5;
      lVar3 = lVar9;
      if ((uVar8 - iVar1 < 0x200) &&
         ((uVar8 = uVar8 * 2, 0x20000000 < uVar8 || (lVar3 = _realloc_base(lVar9,uVar8), lVar3 == 0)
          ))) {
LAB_14039ba76:
        FUN_1402c9cf8(_File);
        goto LAB_14039ba7e;
      }
      sVar4 = fread((void *)((longlong)puVar5 + lVar3),1,(ulonglong)(uVar8 - iVar1),_File);
      iVar2 = ferror(_File);
      lVar9 = lVar3;
      if (iVar2 != 4) {
        if (iVar2 != 0) goto LAB_14039ba76;
        puVar5 = (undefined4 *)(ulonglong)(uint)(iVar1 + (int)sVar4);
      }
      uVar6 = (uint)puVar5;
      iVar1 = feof(_File);
    } while (iVar1 == 0);
    if (uVar6 < 0x80000000) goto LAB_14039ba0b;
  }
  else {
LAB_14039ba0b:
    puVar5 = (undefined4 *)_calloc_base(1,0x30);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined2 *)((longlong)puVar5 + 5) = 0;
      *(undefined1 *)((longlong)puVar5 + 7) = 0;
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      *puVar5 = 1;
      *(undefined1 *)(puVar5 + 1) = 1;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(longlong *)(puVar5 + 4) = lVar3;
      *(undefined1 **)(puVar5 + 10) = &LAB_14035bf70;
      puVar5[6] = uVar6;
      puVar5[7] = 2;
      *(longlong *)(puVar5 + 8) = lVar3;
      puVar7 = puVar5;
      goto LAB_14039ba90;
    }
  }
  thunk_FUN_1402d9040(lVar3);
LAB_14039ba90:
  FUN_1402c9cf8(_File);
  return puVar7;
}

