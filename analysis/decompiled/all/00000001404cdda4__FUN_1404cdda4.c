// Function: FUN_1404cdda4
// Addr: 1404cdda4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cdda5) overlaps instruction at (ram,0x0001404cdda4)
    */

void FUN_1404cdda4(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  cVar3 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar3;
  if (SCARRY1((char)uVar2,cVar3)) {
    out(param_2,(uint)in_RAX);
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
    *pcVar1 = *pcVar1 + unaff_BL;
    *(char *)in_RAX = (char)*in_RAX + cVar3;
    *(char *)((longlong)in_RAX + -0x11) =
         *(char *)((longlong)in_RAX + -0x11) + (char)((ushort)param_2 >> 8);
  }
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

