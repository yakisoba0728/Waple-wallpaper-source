// Function: FUN_1404b6ab8
// Addr: 1404b6ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6ab8(longlong param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  int *in_RAX;
  char cVar5;
  char unaff_BH;
  uint unaff_ESI;
  byte in_CF;
  char in_ZF;
  char *pcVar4;
  
  cVar5 = (char)(param_1 + -1);
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    uRam0521004b69d0001b = ((int)in_RAX - *in_RAX) - (uint)in_CF;
    uVar3 = CONCAT31((int3)(uRam0521004b69d0001b >> 8),
                     (char)uRam0521004b69d0001b + *(char *)(ulonglong)uRam0521004b69d0001b) +
            0xf9000d64;
    pcVar4 = (char *)(ulonglong)uVar3;
    *param_4 = *param_4;
    cVar2 = (char)uVar3;
    *pcVar4 = *pcVar4 + cVar2;
    uRam69e0001ba582001b = uVar3;
    *param_4 = *param_4;
    *pcVar4 = *pcVar4 + cVar2;
    uVar1 = (undefined3)(uVar3 >> 8);
    cVar2 = cVar2 + (char)(uVar3 >> 8);
    uRam69d0001ba3f9001b = CONCAT31(uVar1,cVar2);
    *param_4 = *param_4 + cVar2;
    *(byte *)param_2 = (byte)*param_2 + cVar5 + unaff_BH;
    uVar3 = (CONCAT31(uVar1,cVar2) | 5) + 0x3600470;
    *(byte *)param_2 = (byte)*param_2 ^ (byte)uVar3;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (byte)uVar3;
    *param_2 = *param_2 & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001454b6fcd = cRam00000001454b6fcd + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

