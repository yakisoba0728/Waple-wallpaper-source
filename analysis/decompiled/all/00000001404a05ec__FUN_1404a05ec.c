// Function: FUN_1404a05ec
// Addr: 1404a05ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a05ec(byte *param_1,uint *param_2)

{
  undefined3 uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar4;
  uint unaff_ESI;
  longlong unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  (&stack0x00000000)[(longlong)param_2] = (&stack0x00000000)[(longlong)param_2] + cVar2;
  puVar4 = (uint *)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                     (char)((ulonglong)in_RAX >> 8) + cVar2),0x46);
  iVar3 = (uint)puVar4 + *puVar4;
  uVar1 = (undefined3)((uint)iVar3 >> 8);
  cVar2 = ((char)iVar3 - *(char *)(unaff_RDI + 3)) - CARRY4((uint)puVar4,*puVar4);
  (&stack0x0901004a)[CONCAT31(uVar1,cVar2)] =
       (&stack0x0901004a)[CONCAT31(uVar1,cVar2)] + (char)param_2;
  *param_2 = *param_2 | unaff_ESI;
  *param_1 = *param_1 ^ (byte)((uint)(CONCAT31(uVar1,cVar2) + 0x25003e0) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

