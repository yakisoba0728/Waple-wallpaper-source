// Function: FUN_1404b67c4
// Addr: 1404b67c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b67c4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  uint unaff_ESP;
  
  pcVar4 = (char *)(ulonglong)(in_EAX | 0x7e40434);
  pcVar1 = pcVar4 + -0x29ffe484;
  cVar2 = *pcVar1;
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar5;
  if (SCARRY1(cVar2,cVar5) == *pcVar1 < '\0') {
    *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in_EAX | 0x7e40434 | unaff_ESP;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

