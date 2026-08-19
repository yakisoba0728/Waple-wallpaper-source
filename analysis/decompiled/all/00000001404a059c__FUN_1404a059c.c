// Function: FUN_1404a059c
// Addr: 1404a059c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a059c(byte *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar8;
  undefined8 in_RAX;
  char unaff_BH;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  byte bVar3;
  char *pcVar7;
  
  cVar4 = unaff_RDI[3];
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + bVar8;
  *unaff_RDI = *unaff_RSI;
  bVar6 = (((char)in_RAX - cVar4) - in_CF) + 0x4a;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar8;
  pbVar5 = (byte *)((longlong)pcVar7 * 2);
  bVar2 = *pbVar5;
  bVar3 = *pbVar5;
  *pbVar5 = bVar3 + bVar6 + CARRY1(bVar1,bVar8);
  pcVar7[7] = pcVar7[7] + unaff_BH +
              (CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,CARRY1(bVar1,bVar8)));
  *pcVar7 = *pcVar7 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

