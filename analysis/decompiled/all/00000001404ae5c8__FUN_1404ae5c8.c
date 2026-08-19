// Function: FUN_1404ae5c8
// Addr: 1404ae5c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae5c8(char *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong unaff_RSI;
  char *pcVar7;
  longlong unaff_RDI;
  char *pcVar5;
  uint *puVar6;
  
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & (uint)param_1;
  (&stack0x00000000)[(longlong)in_RAX * 8] =
       (&stack0x00000000)[(longlong)in_RAX * 8] + (char)param_1;
  *in_RAX = *in_RAX | (uint)in_RAX;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] |
       (byte)((ulonglong)in_RAX >> 8);
  cVar3 = in(0xe4);
  pcVar5 = (char *)CONCAT71(0xdc0013,cVar3);
  *param_1 = *param_1;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar5[-0x23ffecbc] = pcVar5[-0x23ffecbc] + unaff_BH;
  bVar4 = in(0xe4);
  puVar6 = (uint *)CONCAT71(0xdc0013,bVar4);
  *param_1 = *param_1;
  *(byte *)puVar6 = (byte)*puVar6 + bVar4;
  *(char *)(unaff_RSI - 0x47ffecbc) = *(char *)(unaff_RSI - 0x47ffecbc) + param_2;
  *puVar6 = *puVar6 & (uint)puVar6;
  uVar1 = *puVar6;
  uVar2 = *puVar6;
  *(byte *)puVar6 = (byte)*puVar6 + bVar4;
  if (!SCARRY1((byte)uVar2,bVar4)) {
    pcVar5 = (char *)(unaff_RSI & 0xffffffff);
    pcVar7 = (char *)(ulonglong)((uint)puVar6 + *puVar6 + (uint)CARRY1((byte)uVar1,bVar4));
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)pcVar5;
    *param_1 = *param_1 + (char)((ulonglong)pcVar5 >> 8);
    *pcVar7 = *pcVar7 + (char)param_1;
    *pcVar5 = *pcVar5 + (char)pcVar5;
    cVar3 = in(7);
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),cVar3);
    *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + 0x28001344) = *(char *)(unaff_RSI + 0x28001344) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

