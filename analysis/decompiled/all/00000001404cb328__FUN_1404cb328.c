// Function: FUN_1404cb328
// Addr: 1404cb328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb329) overlaps instruction at (ram,0x0001404cb328)
    */

void FUN_1404cb328(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *in_RAX;
  char *pcVar4;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || (char)*in_RAX == '\0') {
    *(char *)(param_2 + 0x601004c) =
         *(char *)(param_2 + 0x601004c) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)in_RAX ^ *in_RAX;
  cVar1 = (char)uVar2 + -0x4e;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar4 = *pcVar4 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

