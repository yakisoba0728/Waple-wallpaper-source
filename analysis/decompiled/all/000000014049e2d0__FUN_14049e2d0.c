// Function: FUN_14049e2d0
// Addr: 14049e2d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e2d0(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *in_RAX;
  char *pcVar8;
  byte bVar9;
  undefined6 uVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  int *piVar7;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  *unaff_RDI = (char)in_RAX;
  uVar2 = *in_RAX;
  cVar5 = (char)((uint)uVar2 >> 8);
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  bVar4 = (char)uVar2 + cVar5;
  piVar7 = (int *)(ulonglong)CONCAT31(uVar3,bVar4);
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 == (char *)0x0 || bVar4 != 0) {
    *pcVar8 = *pcVar8 + cVar5;
    *param_2 = *param_2 | bVar4;
    *(char *)piVar7 = (char)*piVar7 + (char)pcVar8;
    cVar5 = in(0x8a);
    pcVar8 = (char *)(in_FS_OFFSET + (ulonglong)CONCAT31(uVar3,cVar5));
    *pcVar8 = *pcVar8 + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x69b002);
  *pbVar1 = *pbVar1 | bVar9;
  cVar5 = (char)param_2 + unaff_BH;
  uVar6 = *piVar7 * 0x49e23c00;
  *pcVar8 = *pcVar8 + (char)(uVar6 >> 8);
  *(undefined1 *)CONCAT62(uVar10,CONCAT11(bVar9,cVar5)) =
       *(undefined1 *)CONCAT62(uVar10,CONCAT11(bVar9,cVar5));
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

