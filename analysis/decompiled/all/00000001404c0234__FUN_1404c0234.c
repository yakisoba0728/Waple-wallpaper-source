// Function: FUN_1404c0234
// Addr: 1404c0234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0234(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  int iVar6;
  longlong lVar7;
  char cVar8;
  undefined6 uVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  uint unaff_ESI;
  char unaff_R12B;
  bool bVar10;
  char *pcVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar3 = (byte)in_RAX;
  *param_1 = *param_1 ^ bVar3;
  *param_1 = *param_1 + unaff_R12B;
  *in_RAX = *in_RAX + bVar3;
  bVar10 = CARRY1(bRam00000001974c2a5b,unaff_BL);
  bRam00000001974c2a5b = bRam00000001974c2a5b + unaff_BL;
  lVar7 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                   CONCAT11(((char)((ulonglong)param_1 >> 8) - *in_RAX) - bVar10,(char)param_1));
  *in_RAX = *in_RAX + cVar8;
  piVar1 = (int *)((longlong)in_RAX * 2 + 0x21);
  iVar6 = (int)lVar7;
  *piVar1 = *piVar1 + iVar6;
  *in_RAX = *in_RAX + bVar3;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  *(uint *)in_RAX = (*(int *)in_RAX - unaff_EBP) - (uint)CARRY1(bVar2,bVar3);
  cRam00000001504c2a6f = cRam00000001504c2a6f + unaff_BL;
  piVar1 = (int *)((longlong)in_RAX * 2 + 1);
  *piVar1 = *piVar1 + iVar6;
  uVar4 = (uint)in_RAX | uRam00000001480e0d5f;
  pcVar5 = (char *)(ulonglong)uVar4;
  if (lVar7 == 1 || uVar4 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    cVar8 = cVar8 + *pcVar5;
  }
  *pcVar5 = *pcVar5 + (char)uVar4;
  *(uint *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) =
       *(uint *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

