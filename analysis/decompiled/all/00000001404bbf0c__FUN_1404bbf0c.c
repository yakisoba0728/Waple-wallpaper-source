// Function: FUN_1404bbf0c
// Addr: 1404bbf0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbf0c(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar4;
  byte bVar5;
  byte *in_RAX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  byte bVar3;
  uint *puVar6;
  
  bVar5 = (byte)in_RAX & *in_RAX;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar5;
  pbVar4 = (byte *)((longlong)puVar6 * 2);
  bVar2 = *pbVar4;
  bVar3 = *pbVar4;
  *pbVar4 = bVar3 + bVar5 + CARRY1(bVar1,bVar5);
  *param_1 = *param_1 + bVar5 + (CARRY1(bVar2,bVar5) || CARRY1(bVar3 + bVar5,CARRY1(bVar1,bVar5)));
  *puVar6 = *puVar6 & (uint)puVar6;
  *(undefined1 *)(unaff_RDI + 1) = *unaff_RSI;
  *(undefined1 *)(unaff_RDI + 2) = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

