// Function: FUN_1404cdd0c
// Addr: 1404cdd0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd0c(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined2 in_FPUStatusWord;
  uint *puVar4;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar3 = in_EAX + 0x10000864;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUStatusWord;
  *param_2 = *param_2 + unaff_BH;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUStatusWord;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  cVar5 = ((char)param_1 - *param_2) - CARRY1((byte)uVar1,bVar2);
  *puVar4 = *puVar4 & uVar3;
  uVar1 = *puVar4;
  bVar2 = (byte)uVar3;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  cVar6 = (char)((ulonglong)param_1 >> 8) + unaff_BL + CARRY1((byte)uVar1,bVar2);
  *param_2 = *param_2 ^ unaff_BL;
  *(byte *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

