// Function: FUN_1404bc714
// Addr: 1404bc714
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc714(byte *param_1,int param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *in_RAX;
  undefined7 uVar4;
  byte *pbVar3;
  byte bVar6;
  char *pcVar5;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  param_2 = param_2 + *(int *)(in_RAX + 2);
  *param_1 = *param_1 ^ (byte)((ulonglong)in_RAX >> 8);
  bVar6 = (byte)((uint)param_2 >> 8);
  if (*param_1 != 0) {
    uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar1 = (byte)in_RAX & *in_RAX;
    bVar1 = bVar1 & *(byte *)CONCAT71(uVar4,bVar1);
    pbVar3 = (byte *)CONCAT71(uVar4,bVar1);
    pcVar5 = (char *)(ulonglong)
                     CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar6 ^ bVar1,(char)param_2));
    *param_4 = *param_4 - 8;
    *pcVar5 = *pcVar5 + bVar1;
    *pbVar3 = *pbVar3 + bVar1;
    bVar1 = bVar1 & *pbVar3 & *(byte *)CONCAT71(uVar4,bVar1 & *pbVar3);
    bVar6 = *param_4;
    *param_4 = *param_4 + bVar1;
    iVar2 = (int)CONCAT71(uVar4,bVar1) + *(int *)(CONCAT71(uVar4,bVar1) * 2) +
            (uint)CARRY1(bVar6,bVar1);
    bVar6 = *unaff_RSI;
    bVar1 = (byte)iVar2;
    *unaff_RSI = *unaff_RSI + bVar1;
    if (!CARRY1(bVar6,bVar1)) {
      *param_1 = *param_1 ^ (byte)((uint)iVar2 >> 8);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)(unaff_RBP + 0x78) = *(char *)(unaff_RBP + 0x78) + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

