// Function: FUN_1404d0f8c
// Addr: 1404d0f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0f9a) overlaps instruction at (ram,0x0001404d0f99)
    */

void FUN_1404d0f8c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong in_RAX;
  uint *puVar3;
  char cVar4;
  char *unaff_RDI;
  undefined1 auStack_8 [8];
  
  cVar4 = (char)param_1;
  *unaff_RDI = *unaff_RDI + cVar4;
  puVar3 = (uint *)(in_RAX ^ 0xf);
  cVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + cVar4;
  if (SCARRY1(cVar2,cVar4)) {
    puVar3 = (uint *)(ulonglong)((uint)puVar3 | *puVar3);
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0xb;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),0xb) + -0x1c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(byte *)puVar3 = (byte)*puVar3 | (byte)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

