// Function: FUN_1404cdcf8
// Addr: 1404cdcf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdcf8(undefined8 param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  uint *puVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined2 in_FPUStatusWord;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar9 = SUB81(param_2,0);
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  *param_2 = *param_2 + (int)param_1;
  bVar10 = (byte)((ulonglong)param_2 >> 8) |
           *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + in_RAX);
  uVar3 = (int)in_RAX + 0x21000134;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11((char)(uVar3 >> 8),(byte)uVar3 | *(byte *)((ulonglong)uVar3 * 2)));
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uVar3 = uVar3 + 0x10000864;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUStatusWord;
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,uVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,uVar9)) + unaff_BH;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_FPUStatusWord;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar10;
  cVar5 = ((char)param_1 - *(char *)CONCAT62(uVar11,CONCAT11(bVar10,uVar9))) -
          CARRY1((byte)uVar1,bVar10);
  *puVar4 = *puVar4 & uVar3;
  uVar1 = *puVar4;
  bVar2 = (byte)uVar3;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  cVar6 = (char)((ulonglong)param_1 >> 8) + unaff_BL + CARRY1((byte)uVar1,bVar2);
  *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,uVar9)) =
       *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,uVar9)) ^ unaff_BL;
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

