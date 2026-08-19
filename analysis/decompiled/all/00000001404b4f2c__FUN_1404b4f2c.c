// Function: FUN_1404b4f2c
// Addr: 1404b4f2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4f2c(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  undefined7 uVar7;
  char unaff_BH;
  byte in_CF;
  char *pcVar6;
  
  cVar4 = cRam000000014b9b5b97;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  uVar1 = (uint)&stack0x00000000 + in_EAX;
  uVar5 = in_EAX + (int)param_2 +
          (uint)(CARRY4((uint)&stack0x00000000,in_EAX) || CARRY4(uVar1,(uint)in_CF));
  pcVar6 = (char *)(ulonglong)uVar5;
  pbVar2 = (byte *)CONCAT71(uVar7,cRam000000014b9b5b97);
  pbVar3 = (byte *)CONCAT71(uVar7,cRam000000014b9b5b97);
  cRam000000014b9b5b97 = cRam000000014b9b5b97 + (char)param_1;
  *pbVar3 = *pbVar2 ^ (byte)(uVar5 >> 8);
  *param_2 = *param_2 | (byte)uVar5;
  *pcVar6 = *pcVar6 + cVar4;
  if (*pcVar6 != '\0') {
    pcVar6[0x34] = pcVar6[0x34] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)((ulonglong)(uVar1 + in_CF) - 8) = pcVar6;
  pcVar6 = (char *)(((ulonglong)uVar5 ^ 0x1a) + 0x54001a34);
  *pcVar6 = *pcVar6 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

