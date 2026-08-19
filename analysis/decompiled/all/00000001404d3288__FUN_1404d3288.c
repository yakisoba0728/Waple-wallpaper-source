// Function: FUN_1404d3288
// Addr: 1404d3288
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d328f) overlaps instruction at (ram,0x0001404d328e)
    */

void FUN_1404d3288(longlong param_1,char param_2,undefined8 param_3,byte *param_4)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  uint *in_RAX;
  byte unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  cVar5 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar5;
  if (SCARRY1((char)uVar4,cVar5)) {
    pcVar2 = (char *)(param_1 + 0x3174003e + (longlong)in_RAX);
    *pcVar2 = *pcVar2 + param_2;
  }
  pcVar2 = (char *)(param_1 + 0x3174003e + (longlong)in_RAX);
  *pcVar2 = *pcVar2 + param_2;
  bVar3 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  puVar1 = (uint *)((ulonglong)
                    CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),
                             cVar5 + (char)*in_RAX + CARRY1(bVar3,unaff_R12B)) + 0x781c0005);
  *puVar1 = *puVar1 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

