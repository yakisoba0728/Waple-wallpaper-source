// Function: FUN_1404b6988
// Addr: 1404b6988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6988(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  uint unaff_EBX;
  int unaff_ESI;
  byte *pbVar3;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + 0x22;
  pbVar3 = (byte *)CONCAT71(uVar4,bVar2);
  *pbVar3 = *pbVar3 + bVar2;
  *param_1 = *param_1 + unaff_ESI;
  puVar1 = (uint *)(CONCAT71(uVar4,bVar2 | *pbVar3) + -0x77dafffe);
  *puVar1 = *puVar1 ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

