// Function: FUN_1404b41b8
// Addr: 1404b41b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b41b8(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  byte bVar4;
  int *piVar8;
  
  uVar7 = in_EAX | 0x1300c50;
  piVar8 = (int *)(ulonglong)uVar7;
  pbVar5 = (byte *)((longlong)piVar8 * 2);
  bVar2 = *pbVar5;
  bVar6 = (byte)uVar7;
  *pbVar5 = *pbVar5 + bVar6;
  bVar3 = *param_1;
  bVar4 = *param_1;
  *param_1 = bVar4 + bVar6 + CARRY1(bVar2,bVar6);
  *piVar8 = *piVar8 + uVar7 +
            (uint)(CARRY1(bVar3,bVar6) || CARRY1(bVar4 + bVar6,CARRY1(bVar2,bVar6)));
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xc) + -0x53fff01c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

