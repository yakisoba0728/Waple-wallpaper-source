// Function: FUN_1404b9894
// Addr: 1404b9894
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9894(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  uint unaff_ESI;
  byte in_CF;
  
  bVar2 = (byte)in_RAX + *param_1;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = bVar2 + in_CF;
  puVar1 = (uint *)((CONCAT71(uVar4,cVar3 + *(char *)CONCAT71(uVar4,cVar3) +
                                    (CARRY1((byte)in_RAX,*param_1) || CARRY1(bVar2,in_CF))) &
                    0xffffffff) + 8);
  *puVar1 = *puVar1 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

