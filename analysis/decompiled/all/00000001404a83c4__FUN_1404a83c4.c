// Function: FUN_1404a83c4
// Addr: 1404a83c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a83c4(char *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined6 uVar6;
  undefined1 *unaff_RDI;
  undefined2 in_ES;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined1)param_2;
  *(undefined2 *)(param_2 + 0x21004a) = in_ES;
  cVar5 = *in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (!SCARRY1(cVar5,(char)in_RAX)) {
    *(undefined2 *)(param_2 + 0x4921004a) = in_ES;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = (int)in_RAX + 0xb4ac000;
  cVar5 = (char)((ulonglong)param_2 >> 8) + (char)uVar2;
  pcVar3 = (char *)((ulonglong)uVar2 | *(ulonglong *)(ulonglong)uVar2);
  uVar1 = in(CONCAT11(cVar5,uVar4));
  *unaff_RDI = uVar1;
  if ((longlong)pcVar3 < 0) {
    *param_1 = *param_1 + (char)((ulonglong)pcVar3 >> 8);
    *pcVar3 = *pcVar3 + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,uVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,uVar4)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

