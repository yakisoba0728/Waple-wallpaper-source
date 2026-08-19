// Function: FUN_1404b8118
// Addr: 1404b8118
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8132) overlaps instruction at (ram,0x0001404b8131)
    */

void FUN_1404b8118(char *param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char *in_RAX;
  byte *unaff_RBX;
  
  cVar2 = (char)in_RAX;
  bVar1 = *unaff_RBX;
  cRam0000000146c39b23 = cVar2;
  *unaff_RBX = *unaff_RBX + param_2;
  if (SCARRY1(cVar2,*in_RAX) != SCARRY1(cVar2 + *in_RAX,CARRY1(bVar1,param_2))) {
    cRam00000001464b953e = cRam00000001464b953e + (char)param_1;
    *param_1 = *param_1 +
               (char)((uint)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                           cVar2 + *in_RAX + CARRY1(bVar1,param_2)) + 0x16340d00) >>
                     8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

