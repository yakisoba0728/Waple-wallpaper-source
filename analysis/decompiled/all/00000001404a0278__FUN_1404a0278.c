// Function: FUN_1404a0278
// Addr: 1404a0278
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0278(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong in_RAX;
  uint *puVar3;
  ulonglong uVar4;
  char *pcVar5;
  byte bVar6;
  undefined6 uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar1 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2 ^ *(byte *)(in_RAX + param_1);
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c);
  uVar4 = (ulonglong)(((uint)puVar3 | *puVar3) + 0x974) & 0xffffffffffffff03;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar1,bVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar1,bVar6)) + unaff_BH;
  pcVar5 = (char *)(param_1 + 0x21004a + uVar4);
  *pcVar5 = *pcVar5 + bVar6;
  puVar3 = (uint *)CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) * '\x02',(char)uVar4))
  ;
  uVar2 = (uint)puVar3 | *puVar3;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar1;
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar2);
  *pcVar5 = *pcVar5 + (char)(uVar2 >> 8);
  *(char *)CONCAT62(uVar7,CONCAT11(cVar1,bVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar1,bVar6)) + unaff_BH;
  pcVar5 = (char *)(param_1 + 0x521004a + ((ulonglong)uVar2 & 0xffffffffffffff03));
  *pcVar5 = *pcVar5 + bVar6;
  *unaff_RDI = *unaff_RSI;
  pcVar5 = (char *)func_0x0001446b0307();
  cVar1 = (char)pcVar5 + *pcVar5 + 't';
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),cVar1);
  *pcVar5 = *pcVar5 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

