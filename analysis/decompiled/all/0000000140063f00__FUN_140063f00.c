// Function: FUN_140063f00
// Addr: 140063f00
// Size: 1267 bytes


/* WARNING: Removing unreachable block (ram,0x0001400640c3) */
/* WARNING: Removing unreachable block (ram,0x0001400640e5) */
/* WARNING: Removing unreachable block (ram,0x0001400640ee) */
/* WARNING: Removing unreachable block (ram,0x0001400640f8) */
/* WARNING: Removing unreachable block (ram,0x000140064119) */
/* WARNING: Removing unreachable block (ram,0x00014006413a) */
/* WARNING: Removing unreachable block (ram,0x000140064155) */
/* WARNING: Removing unreachable block (ram,0x000140064171) */
/* WARNING: Removing unreachable block (ram,0x000140064197) */
/* WARNING: Removing unreachable block (ram,0x00014006419a) */
/* WARNING: Removing unreachable block (ram,0x0001400641e4) */
/* WARNING: Removing unreachable block (ram,0x0001400641a3) */
/* WARNING: Removing unreachable block (ram,0x0001400641c4) */
/* WARNING: Removing unreachable block (ram,0x0001400641cd) */
/* WARNING: Removing unreachable block (ram,0x0001400641b0) */
/* WARNING: Removing unreachable block (ram,0x0001400641b9) */
/* WARNING: Removing unreachable block (ram,0x0001400641fd) */
/* WARNING: Removing unreachable block (ram,0x000140064206) */
/* WARNING: Removing unreachable block (ram,0x00014006422d) */
/* WARNING: Removing unreachable block (ram,0x000140064238) */
/* WARNING: Removing unreachable block (ram,0x00014006423d) */
/* WARNING: Removing unreachable block (ram,0x00014006424d) */
/* WARNING: Removing unreachable block (ram,0x000140064242) */
/* WARNING: Removing unreachable block (ram,0x000140064252) */
/* WARNING: Removing unreachable block (ram,0x000140064257) */
/* WARNING: Removing unreachable block (ram,0x00014006425c) */
/* WARNING: Removing unreachable block (ram,0x000140064269) */
/* WARNING: Removing unreachable block (ram,0x000140064261) */
/* WARNING: Removing unreachable block (ram,0x00014006426e) */
/* WARNING: Removing unreachable block (ram,0x000140064272) */
/* WARNING: Removing unreachable block (ram,0x00014006427d) */
/* WARNING: Removing unreachable block (ram,0x000140064277) */
/* WARNING: Removing unreachable block (ram,0x000140064283) */
/* WARNING: Removing unreachable block (ram,0x00014006428b) */
/* WARNING: Removing unreachable block (ram,0x0001400642b5) */
/* WARNING: Removing unreachable block (ram,0x0001400642d8) */
/* WARNING: Removing unreachable block (ram,0x0001400642d3) */
/* WARNING: Removing unreachable block (ram,0x0001400642db) */
/* WARNING: Removing unreachable block (ram,0x0001400642e1) */
/* WARNING: Removing unreachable block (ram,0x0001400642ee) */
/* WARNING: Removing unreachable block (ram,0x0001400642fe) */
/* WARNING: Removing unreachable block (ram,0x000140064381) */
/* WARNING: Removing unreachable block (ram,0x00014006430f) */
/* WARNING: Removing unreachable block (ram,0x000140064316) */
/* WARNING: Removing unreachable block (ram,0x00014006431b) */
/* WARNING: Removing unreachable block (ram,0x000140064388) */
/* WARNING: Removing unreachable block (ram,0x0001400643e6) */
/* WARNING: Removing unreachable block (ram,0x0001400643a1) */
/* WARNING: Removing unreachable block (ram,0x0001400643aa) */
/* WARNING: Removing unreachable block (ram,0x0001400643ac) */
/* WARNING: Removing unreachable block (ram,0x000140064324) */
/* WARNING: Removing unreachable block (ram,0x00014006435b) */
/* WARNING: Removing unreachable block (ram,0x00014006436b) */
/* WARNING: Removing unreachable block (ram,0x000140064370) */
/* WARNING: Removing unreachable block (ram,0x00014006437c) */
/* WARNING: Removing unreachable block (ram,0x000140064333) */
/* WARNING: Removing unreachable block (ram,0x000140064340) */
/* WARNING: Removing unreachable block (ram,0x000140064346) */
/* WARNING: Removing unreachable block (ram,0x000140064353) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_140063f00(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_60;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    local_88 = CONCAT31(local_88._1_3_,6);
    plVar1 = (longlong *)FUN_14028af20(0x10);
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    local_b0 = CONCAT31(local_b0._1_3_,6);
    local_b0 = local_b0 & 0xfffffeff;
    local_98 = 0;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar1 = lVar2;
    local_a8 = 0;
    uStack_a0 = 0;
    plVar1 = (longlong *)FUN_14028af20(0x10);
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar1 = lVar2;
    local_b8 = plVar1;
    uVar3 = FUN_140086de0(&DAT_1404df5e8,"general","");
    lVar2 = FUN_140087490(uVar3,"wpresets","");
    if (lVar2 != 0) {
      uVar3 = FUN_140086de0(uVar3,"wpresets","");
      FUN_140085520(&local_b8,uVar3);
    }
    local_60 = CONCAT31(local_60._1_3_,6);
    plVar1 = (longlong *)FUN_14028af20(0x10);
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    local_88 = local_60 & 0xfffffeff;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar1 = lVar2;
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = plVar1;
                    /* WARNING: Could not recover jumptable at 0x0001400640a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)
             (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + _UNK_140064428))
                       (IMAGE_DOS_HEADER_140000000.e_magic + _UNK_140064428);
    return puVar4;
  }
  return &stack0x00000000;
}

