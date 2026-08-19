// Function: FUN_1404b80d0
// Addr: 1404b80d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b80d0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar5;
  uint in_EAX;
  uint uVar3;
  char unaff_SPL;
  char *unaff_RSI;
  byte *pbVar4;
  
  uVar3 = in_EAX ^ 0x34001dd3;
  pbVar4 = (byte *)(ulonglong)uVar3;
  out(0x49,(char)uVar3);
  bVar5 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  *pbVar4 = *pbVar4 + (char)uVar3;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar5;
  bVar2 = (byte)param_1 & 0x1f;
  uRam000000015e1eb5e3 =
       (uint)(CONCAT14(CARRY1(bVar1,bVar5),uRam000000015e1eb5e3) >> bVar2) |
       uRam000000015e1eb5e3 << 0x21 - bVar2;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

