// Function: FUN_1404c9ffc
// Addr: 1404c9ffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9ffc(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  byte *in_RAX;
  char cVar8;
  char *pcVar7;
  char cVar9;
  byte *unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  char unaff_R12B;
  int iVar5;
  char *pcVar6;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *(int *)unaff_RBX = *(int *)unaff_RBX + (int)param_2;
  *in_RAX = *in_RAX | (byte)in_RAX;
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || unaff_ESI + *(int *)(param_2 + 0xf) == 0) {
    *unaff_RBX = *unaff_RBX >> 1 | *unaff_RBX << 7;
    *pcVar7 = *pcVar7;
    in_RAX[7] = in_RAX[7] | (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + *in_RAX);
  uVar4 = iVar5 + 0x7f4;
  pcVar6 = (char *)(ulonglong)uVar4;
  if (uVar4 == 0 || iVar5 < -0x7f4) {
    pcVar1 = (char *)((longlong)pcVar6 * 5 + 0x32);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)(unaff_RDI + (longlong)unaff_RBX * 4);
    cVar8 = (char)((ulonglong)pcVar7 >> 8);
    *pcVar1 = *pcVar1 + cVar8;
    *pcVar7 = *pcVar7 + unaff_R12B;
    cVar3 = (char)uVar4;
    *pcVar6 = *pcVar6 + cVar3;
    cVar2 = *pcVar6;
    *pcVar6 = *pcVar6 + cVar3;
    if (*pcVar6 == '\0' || SCARRY1(cVar2,cVar3) != *pcVar6 < '\0') {
      pcVar1 = (char *)((longlong)pcVar6 * 5 + 0x32);
      *pcVar1 = *pcVar1 + cVar9;
      pcVar1 = (char *)(unaff_RDI + (longlong)unaff_RBX * 4);
      *pcVar1 = *pcVar1 + cVar8;
      *pcVar7 = *pcVar7 + unaff_R12B;
      *param_2 = *param_2 + cVar3;
      *pcVar6 = *pcVar6 + cVar3;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2[(uint)(unaff_ESI + *(int *)(param_2 + 0xf))] =
       param_2[(uint)(unaff_ESI + *(int *)(param_2 + 0xf))] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

