// Function: FUN_1404d023c
// Addr: 1404d023c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d023c(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  byte *in_RAX;
  char cVar4;
  longlong unaff_RDI;
  bool in_PF;
  
  if (!in_PF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *(int *)(in_RAX + 2);
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX ^ bVar3;
  cVar4 = *param_1;
  *param_1 = *param_1 + bVar3;
  if (!SCARRY1(cVar4,bVar3)) {
    cVar4 = (char)((uint)(param_2 + iVar2) >> 8);
    in_RAX[-0x58] = in_RAX[-0x58] + cVar4;
    pcVar1 = (char *)((ulonglong)((int)(short)in_RAX + 0x6885300) + unaff_RDI * 2);
    *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

