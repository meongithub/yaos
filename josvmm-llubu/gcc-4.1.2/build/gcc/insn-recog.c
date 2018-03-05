/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_943 (rtx, rtx *);
extern rtx gen_split_944 (rtx, rtx *);
extern rtx gen_split_946 (rtx, rtx *);
extern rtx gen_split_948 (rtx, rtx *);
extern rtx gen_split_949 (rtx, rtx *);
extern rtx gen_split_951 (rtx, rtx *);
extern rtx gen_split_952 (rtx, rtx *);
extern rtx gen_split_953 (rtx, rtx *);
extern rtx gen_split_955 (rtx, rtx *);
extern rtx gen_split_956 (rtx, rtx *);
extern rtx gen_split_957 (rtx, rtx *);
extern rtx gen_split_958 (rtx, rtx *);
extern rtx gen_split_959 (rtx, rtx *);
extern rtx gen_split_961 (rtx, rtx *);
extern rtx gen_split_963 (rtx, rtx *);
extern rtx gen_split_964 (rtx, rtx *);
extern rtx gen_split_965 (rtx, rtx *);
extern rtx gen_split_967 (rtx, rtx *);
extern rtx gen_split_968 (rtx, rtx *);
extern rtx gen_split_969 (rtx, rtx *);
extern rtx gen_split_971 (rtx, rtx *);
extern rtx gen_split_972 (rtx, rtx *);
extern rtx gen_split_974 (rtx, rtx *);
extern rtx gen_split_975 (rtx, rtx *);
extern rtx gen_split_976 (rtx, rtx *);
extern rtx gen_split_977 (rtx, rtx *);
extern rtx gen_split_978 (rtx, rtx *);
extern rtx gen_split_979 (rtx, rtx *);
extern rtx gen_split_985 (rtx, rtx *);
extern rtx gen_split_987 (rtx, rtx *);
extern rtx gen_split_988 (rtx, rtx *);
extern rtx gen_split_990 (rtx, rtx *);
extern rtx gen_split_991 (rtx, rtx *);
extern rtx gen_peephole2_1001 (rtx, rtx *);
extern rtx gen_peephole2_1002 (rtx, rtx *);
extern rtx gen_peephole2_1003 (rtx, rtx *);
extern rtx gen_peephole2_1004 (rtx, rtx *);
extern rtx gen_split_1005 (rtx, rtx *);
extern rtx gen_split_1006 (rtx, rtx *);
extern rtx gen_split_1007 (rtx, rtx *);
extern rtx gen_split_1008 (rtx, rtx *);
extern rtx gen_split_1009 (rtx, rtx *);
extern rtx gen_split_1010 (rtx, rtx *);
extern rtx gen_split_1011 (rtx, rtx *);
extern rtx gen_split_1012 (rtx, rtx *);
extern rtx gen_split_1013 (rtx, rtx *);
extern rtx gen_split_1014 (rtx, rtx *);
extern rtx gen_split_1015 (rtx, rtx *);
extern rtx gen_split_1016 (rtx, rtx *);
extern rtx gen_split_1017 (rtx, rtx *);
extern rtx gen_split_1018 (rtx, rtx *);
extern rtx gen_split_1019 (rtx, rtx *);
extern rtx gen_split_1020 (rtx, rtx *);
extern rtx gen_split_1021 (rtx, rtx *);
extern rtx gen_split_1022 (rtx, rtx *);
extern rtx gen_split_1029 (rtx, rtx *);
extern rtx gen_split_1032 (rtx, rtx *);
extern rtx gen_split_1034 (rtx, rtx *);
extern rtx gen_split_1035 (rtx, rtx *);
extern rtx gen_split_1036 (rtx, rtx *);
extern rtx gen_split_1037 (rtx, rtx *);
extern rtx gen_split_1044 (rtx, rtx *);
extern rtx gen_split_1067 (rtx, rtx *);
extern rtx gen_split_1068 (rtx, rtx *);
extern rtx gen_split_1073 (rtx, rtx *);
extern rtx gen_split_1074 (rtx, rtx *);
extern rtx gen_split_1075 (rtx, rtx *);
extern rtx gen_split_1077 (rtx, rtx *);
extern rtx gen_split_1078 (rtx, rtx *);
extern rtx gen_split_1079 (rtx, rtx *);
extern rtx gen_split_1082 (rtx, rtx *);
extern rtx gen_split_1083 (rtx, rtx *);
extern rtx gen_split_1087 (rtx, rtx *);
extern rtx gen_split_1088 (rtx, rtx *);
extern rtx gen_split_1093 (rtx, rtx *);
extern rtx gen_split_1094 (rtx, rtx *);
extern rtx gen_split_1096 (rtx, rtx *);
extern rtx gen_split_1103 (rtx, rtx *);
extern rtx gen_split_1104 (rtx, rtx *);
extern rtx gen_split_1108 (rtx, rtx *);
extern rtx gen_split_1109 (rtx, rtx *);
extern rtx gen_split_1112 (rtx, rtx *);
extern rtx gen_split_1113 (rtx, rtx *);
extern rtx gen_split_1114 (rtx, rtx *);
extern rtx gen_split_1115 (rtx, rtx *);
extern rtx gen_split_1116 (rtx, rtx *);
extern rtx gen_split_1117 (rtx, rtx *);
extern rtx gen_split_1119 (rtx, rtx *);
extern rtx gen_split_1120 (rtx, rtx *);
extern rtx gen_split_1122 (rtx, rtx *);
extern rtx gen_split_1124 (rtx, rtx *);
extern rtx gen_peephole2_1126 (rtx, rtx *);
extern rtx gen_split_1127 (rtx, rtx *);
extern rtx gen_split_1131 (rtx, rtx *);
extern rtx gen_split_1132 (rtx, rtx *);
extern rtx gen_peephole2_1136 (rtx, rtx *);
extern rtx gen_split_1137 (rtx, rtx *);
extern rtx gen_peephole2_1143 (rtx, rtx *);
extern rtx gen_split_1144 (rtx, rtx *);
extern rtx gen_split_1149 (rtx, rtx *);
extern rtx gen_split_1154 (rtx, rtx *);
extern rtx gen_split_1179 (rtx, rtx *);
extern rtx gen_split_1180 (rtx, rtx *);
extern rtx gen_split_1181 (rtx, rtx *);
extern rtx gen_split_1182 (rtx, rtx *);
extern rtx gen_split_1201 (rtx, rtx *);
extern rtx gen_split_1202 (rtx, rtx *);
extern rtx gen_split_1203 (rtx, rtx *);
extern rtx gen_split_1204 (rtx, rtx *);
extern rtx gen_split_1205 (rtx, rtx *);
extern rtx gen_split_1206 (rtx, rtx *);
extern rtx gen_split_1207 (rtx, rtx *);
extern rtx gen_split_1208 (rtx, rtx *);
extern rtx gen_peephole2_1211 (rtx, rtx *);
extern rtx gen_peephole2_1212 (rtx, rtx *);
extern rtx gen_split_1225 (rtx, rtx *);
extern rtx gen_split_1226 (rtx, rtx *);
extern rtx gen_split_1228 (rtx, rtx *);
extern rtx gen_split_1229 (rtx, rtx *);
extern rtx gen_split_1235 (rtx, rtx *);
extern rtx gen_split_1236 (rtx, rtx *);
extern rtx gen_split_1237 (rtx, rtx *);
extern rtx gen_split_1238 (rtx, rtx *);
extern rtx gen_split_1239 (rtx, rtx *);
extern rtx gen_split_1248 (rtx, rtx *);
extern rtx gen_split_1249 (rtx, rtx *);
extern rtx gen_split_1250 (rtx, rtx *);
extern rtx gen_split_1251 (rtx, rtx *);
extern rtx gen_split_1252 (rtx, rtx *);
extern rtx gen_split_1253 (rtx, rtx *);
extern rtx gen_split_1254 (rtx, rtx *);
extern rtx gen_split_1255 (rtx, rtx *);
extern rtx gen_peephole2_1256 (rtx, rtx *);
extern rtx gen_peephole2_1258 (rtx, rtx *);
extern rtx gen_peephole2_1260 (rtx, rtx *);
extern rtx gen_split_1308 (rtx, rtx *);
extern rtx gen_split_1309 (rtx, rtx *);
extern rtx gen_split_1310 (rtx, rtx *);
extern rtx gen_split_1311 (rtx, rtx *);
extern rtx gen_split_1312 (rtx, rtx *);
extern rtx gen_split_1313 (rtx, rtx *);
extern rtx gen_split_1314 (rtx, rtx *);
extern rtx gen_split_1315 (rtx, rtx *);
extern rtx gen_split_1316 (rtx, rtx *);
extern rtx gen_split_1320 (rtx, rtx *);
extern rtx gen_split_1324 (rtx, rtx *);
extern rtx gen_split_1325 (rtx, rtx *);
extern rtx gen_split_1326 (rtx, rtx *);
extern rtx gen_split_1327 (rtx, rtx *);
extern rtx gen_split_1328 (rtx, rtx *);
extern rtx gen_split_1329 (rtx, rtx *);
extern rtx gen_split_1330 (rtx, rtx *);
extern rtx gen_split_1331 (rtx, rtx *);
extern rtx gen_split_1332 (rtx, rtx *);
extern rtx gen_split_1336 (rtx, rtx *);
extern rtx gen_split_1340 (rtx, rtx *);
extern rtx gen_split_1341 (rtx, rtx *);
extern rtx gen_split_1342 (rtx, rtx *);
extern rtx gen_split_1343 (rtx, rtx *);
extern rtx gen_split_1344 (rtx, rtx *);
extern rtx gen_split_1345 (rtx, rtx *);
extern rtx gen_split_1346 (rtx, rtx *);
extern rtx gen_split_1347 (rtx, rtx *);
extern rtx gen_split_1348 (rtx, rtx *);
extern rtx gen_split_1352 (rtx, rtx *);
extern rtx gen_split_1356 (rtx, rtx *);
extern rtx gen_peephole2_1375 (rtx, rtx *);
extern rtx gen_peephole2_1376 (rtx, rtx *);
extern rtx gen_split_1380 (rtx, rtx *);
extern rtx gen_split_1383 (rtx, rtx *);
extern rtx gen_peephole2_1385 (rtx, rtx *);
extern rtx gen_split_1394 (rtx, rtx *);
extern rtx gen_split_1395 (rtx, rtx *);
extern rtx gen_split_1396 (rtx, rtx *);
extern rtx gen_split_1397 (rtx, rtx *);
extern rtx gen_split_1398 (rtx, rtx *);
extern rtx gen_split_1399 (rtx, rtx *);
extern rtx gen_peephole2_1400 (rtx, rtx *);
extern rtx gen_peephole2_1401 (rtx, rtx *);
extern rtx gen_peephole2_1402 (rtx, rtx *);
extern rtx gen_peephole2_1403 (rtx, rtx *);
extern rtx gen_peephole2_1404 (rtx, rtx *);
extern rtx gen_peephole2_1405 (rtx, rtx *);
extern rtx gen_peephole2_1406 (rtx, rtx *);
extern rtx gen_peephole2_1407 (rtx, rtx *);
extern rtx gen_peephole2_1408 (rtx, rtx *);
extern rtx gen_peephole2_1409 (rtx, rtx *);
extern rtx gen_peephole2_1410 (rtx, rtx *);
extern rtx gen_peephole2_1411 (rtx, rtx *);
extern rtx gen_peephole2_1412 (rtx, rtx *);
extern rtx gen_peephole2_1413 (rtx, rtx *);
extern rtx gen_peephole2_1414 (rtx, rtx *);
extern rtx gen_peephole2_1415 (rtx, rtx *);
extern rtx gen_peephole2_1416 (rtx, rtx *);
extern rtx gen_peephole2_1417 (rtx, rtx *);
extern rtx gen_peephole2_1418 (rtx, rtx *);
extern rtx gen_peephole2_1419 (rtx, rtx *);
extern rtx gen_peephole2_1420 (rtx, rtx *);
extern rtx gen_peephole2_1421 (rtx, rtx *);
extern rtx gen_peephole2_1422 (rtx, rtx *);
extern rtx gen_peephole2_1423 (rtx, rtx *);
extern rtx gen_peephole2_1424 (rtx, rtx *);
extern rtx gen_peephole2_1425 (rtx, rtx *);
extern rtx gen_peephole2_1426 (rtx, rtx *);
extern rtx gen_peephole2_1427 (rtx, rtx *);
extern rtx gen_peephole2_1428 (rtx, rtx *);
extern rtx gen_peephole2_1429 (rtx, rtx *);
extern rtx gen_peephole2_1430 (rtx, rtx *);
extern rtx gen_peephole2_1431 (rtx, rtx *);
extern rtx gen_peephole2_1432 (rtx, rtx *);
extern rtx gen_peephole2_1433 (rtx, rtx *);
extern rtx gen_peephole2_1434 (rtx, rtx *);
extern rtx gen_peephole2_1435 (rtx, rtx *);
extern rtx gen_peephole2_1436 (rtx, rtx *);
extern rtx gen_peephole2_1437 (rtx, rtx *);
extern rtx gen_peephole2_1438 (rtx, rtx *);
extern rtx gen_peephole2_1439 (rtx, rtx *);
extern rtx gen_peephole2_1440 (rtx, rtx *);
extern rtx gen_peephole2_1441 (rtx, rtx *);
extern rtx gen_peephole2_1442 (rtx, rtx *);
extern rtx gen_peephole2_1443 (rtx, rtx *);
extern rtx gen_peephole2_1444 (rtx, rtx *);
extern rtx gen_peephole2_1445 (rtx, rtx *);
extern rtx gen_peephole2_1446 (rtx, rtx *);
extern rtx gen_peephole2_1447 (rtx, rtx *);
extern rtx gen_peephole2_1448 (rtx, rtx *);
extern rtx gen_peephole2_1449 (rtx, rtx *);
extern rtx gen_peephole2_1450 (rtx, rtx *);
extern rtx gen_peephole2_1451 (rtx, rtx *);
extern rtx gen_peephole2_1452 (rtx, rtx *);
extern rtx gen_peephole2_1453 (rtx, rtx *);
extern rtx gen_peephole2_1454 (rtx, rtx *);
extern rtx gen_peephole2_1455 (rtx, rtx *);
extern rtx gen_peephole2_1456 (rtx, rtx *);
extern rtx gen_peephole2_1457 (rtx, rtx *);
extern rtx gen_peephole2_1458 (rtx, rtx *);
extern rtx gen_peephole2_1459 (rtx, rtx *);
extern rtx gen_peephole2_1460 (rtx, rtx *);
extern rtx gen_split_1469 (rtx, rtx *);
extern rtx gen_split_1471 (rtx, rtx *);
extern rtx gen_split_1501 (rtx, rtx *);
extern rtx gen_split_1503 (rtx, rtx *);
extern rtx gen_split_1521 (rtx, rtx *);
extern rtx gen_split_1523 (rtx, rtx *);
extern rtx gen_split_1524 (rtx, rtx *);
extern rtx gen_split_1525 (rtx, rtx *);
extern rtx gen_split_1526 (rtx, rtx *);
extern rtx gen_split_1593 (rtx, rtx *);
extern rtx gen_split_1595 (rtx, rtx *);
extern rtx gen_split_1616 (rtx, rtx *);
extern rtx gen_split_1617 (rtx, rtx *);
extern rtx gen_split_1618 (rtx, rtx *);
extern rtx gen_split_1619 (rtx, rtx *);
extern rtx gen_split_1630 (rtx, rtx *);
extern rtx gen_split_1631 (rtx, rtx *);
extern rtx gen_split_1637 (rtx, rtx *);
extern rtx gen_split_1638 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L11908;
    case REG:
      goto L11909;
    default:
     break;
   }
 L11819: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L101;
    }
 L11825: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L688;
    }
 L11843: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L711;
    }
 L11846: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L803;
    }
  goto ret0;

 L11908: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L260;
    }
  goto L11825;

 L260: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, HImode))
    {
      operands[1] = x1;
      return 36;  /* *pushhi2 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11909: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 18)
    goto L928;
  goto L11819;

 L928: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 25)
    goto L929;
  x1 = XEXP (x0, 0);
  goto L11819;

 L929: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L930;
    }
  x1 = XEXP (x0, 0);
  goto L11819;

 L930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4398 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 124;  /* x86_fldcw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11819;

 L101: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L11910;
  x1 = XEXP (x0, 0);
  goto L11825;

 L11910: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L11917;
    case SIGN_EXTRACT:
      goto L343;
    case ZERO_EXTEND:
      goto L477;
    case SIGN_EXTEND:
      goto L558;
    case MULT:
      goto L1670;
    case IF_THEN_ELSE:
      goto L6206;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11917: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11919;
  x1 = XEXP (x0, 0);
  goto L11825;

 L11919: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 21L:
      goto L102;
    case 66L:
      goto L5545;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case CCFPmode:
      goto L11921;
    case CCFPUmode:
      goto L11922;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11921: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L110;
    case REG:
      goto L11924;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11825;

 L110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L11925;
    case DFmode:
      goto L11926;
    case XFmode:
      goto L11927;
    default:
      break;
    }
 L103: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L139;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11925: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L111;
    }
  goto L103;

 L111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L112;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L112: ATTRIBUTE_UNUSED_LABEL
  if (
#line 866 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 14;  /* *cmpfp_sf */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L11926: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L118;
    }
  goto L103;

 L118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L119;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L119: ATTRIBUTE_UNUSED_LABEL
  if (
#line 879 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 15;  /* *cmpfp_df */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L11927: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L125;
    }
  goto L103;

 L125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L126;
    }
  x3 = XEXP (x2, 0);
  goto L103;

 L126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 892 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 16;  /* *cmpfp_xf */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L103;

 L139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (float_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L140;
    }
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L105;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L140: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L11928;
    case SImode:
      goto L11929;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11928: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L141;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L141: ATTRIBUTE_UNUSED_LABEL
  if (
#line 927 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))))
    {
      return 18;  /* *cmpfp_hi */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11929: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L149;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 927 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))))
    {
      return 19;  /* *cmpfp_si */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L105: ATTRIBUTE_UNUSED_LABEL
  if (
#line 845 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 13;  /* *cmpfp_0 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11924: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 18
      && 
#line 942 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 20;  /* x86_fnstsw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L11922: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L131;
  x1 = XEXP (x0, 0);
  goto L11825;

 L131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L132;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L133;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 905 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 17;  /* *cmpfp_u */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L5545: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5546;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L5546: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16995 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 481;  /* *fisthi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L344;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L345;
  x1 = XEXP (x0, 0);
  goto L11825;

 L345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 49;  /* *movhi_extv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L478;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3018 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 73;  /* *zero_extendqihi2_and */
    }
 L490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3027 "../../gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 74;  /* *zero_extendqihi2_movzbw_and */
    }
 L495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3035 "../../gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 75;  /* *zero_extendqihi2_movzbw */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 82;  /* extendqihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L11931;
  x1 = XEXP (x0, 0);
  goto L11825;

 L11931: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1701;
    case SIGN_EXTEND:
      goto L1719;
    case REG:
    case SUBREG:
    case MEM:
      goto L11930;
    default:
      x1 = XEXP (x0, 0);
      goto L11825;
   }
 L11930: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1671;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1702;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1703;
  x1 = XEXP (x0, 0);
  goto L11825;

 L1703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1704;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1704: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6972 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 185;  /* *umulqihi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1720;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1721;
  x1 = XEXP (x0, 0);
  goto L11825;

 L1721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1722;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1722: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6996 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 186;  /* *mulqihi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1672;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L1672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6918 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 183;  /* *mulhi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L6206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6207;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L6207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6208;
  x1 = XEXP (x0, 0);
  goto L11825;

 L6208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6209;
  x1 = XEXP (x0, 0);
  goto L11825;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L6210;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L6211;
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L6211: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18697 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 529;  /* *movhicc_noc */
    }
  x1 = XEXP (x0, 0);
  goto L11825;

 L688: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == FIX)
    goto L689;
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L264;
    }
  x1 = XEXP (x0, 0);
  goto L11843;

 L689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L690;
    }
  x1 = XEXP (x0, 0);
  goto L11843;

 L690: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4166 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 105;  /* fix_trunchi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11843;

 L264: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1292 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 37;  /* *movhi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11843;

 L711: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L11933;
  x1 = XEXP (x0, 0);
  goto L11846;

 L11933: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L712;
    case UNSPEC:
      goto L11936;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11846;

 L712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L713;
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L713: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 108;  /* fix_trunchi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L11936: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11938;
  x1 = XEXP (x0, 0);
  goto L11846;

 L11938: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 23L:
      goto L925;
    case 66L:
      goto L5555;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L925: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && 
#line 4389 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 123;  /* x86_fnstcw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L5555: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5556;
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L5556: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17014 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 483;  /* fisthi2 */
    }
  x1 = XEXP (x0, 0);
  goto L11846;

 L803: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L11940;
  goto ret0;

 L11940: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L804;
    case PLUS:
      goto L1041;
    case MINUS:
      goto L1492;
    case AND:
      goto L2127;
    case IOR:
      goto L2376;
    case XOR:
      goto L2626;
    case NEG:
      goto L2887;
    case NOT:
      goto L3179;
    case ASHIFT:
      goto L3303;
    case ASHIFTRT:
      goto L3564;
    case LSHIFTRT:
      goto L3880;
    case ROTATE:
      goto L4136;
    case ROTATERT:
      goto L4268;
    case UNSPEC:
      goto L11955;
    default:
     break;
   }
  goto ret0;

 L804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L805;
    }
  goto ret0;

 L805: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 114;  /* *fix_trunchi_i387_1 */
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L11957;
  goto ret0;

 L11957: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1042;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1204;
    }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, HImode))
    {
      operands[3] = x3;
      goto L1043;
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1044;
    }
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1045;
    }
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4824 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 140;  /* addhi3_carry */
    }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1205;
    }
  goto ret0;

 L1205: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5783 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 153;  /* *addhi_1_lea */
    }
 L1219: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5826 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 154;  /* *addhi_1 */
    }
  goto ret0;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1493;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1494;
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1566;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, HImode))
    {
      operands[3] = x3;
      goto L1495;
    }
  goto ret0;

 L1495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1496;
    }
  goto ret0;

 L1496: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6577 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 170;  /* subhi3_carry */
    }
  goto ret0;

 L1566: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6706 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 175;  /* *subhi_1 */
    }
  goto ret0;

 L2127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2128;
    }
  goto ret0;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2129;
    }
  goto ret0;

 L2129: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8204 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 210;  /* *andhi_1 */
    }
  goto ret0;

 L2376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2377;
    }
  goto ret0;

 L2377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2378;
    }
  goto ret0;

 L2378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8630 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 224;  /* *iorhi_1 */
    }
  goto ret0;

 L2626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2627;
    }
  goto ret0;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2628;
    }
  goto ret0;

 L2628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9007 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 238;  /* *xorhi_1 */
    }
  goto ret0;

 L2887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2888;
    }
  goto ret0;

 L2888: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9458 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 253;  /* *neghi2_1 */
    }
  goto ret0;

 L3179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3180;
    }
  goto ret0;

 L3180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10106 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands)))
    {
      return 282;  /* *one_cmplhi2_1 */
    }
  goto ret0;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3304;
    }
  goto ret0;

 L3304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3305;
    }
  goto ret0;

 L3305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10797 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 291;  /* *ashlhi3_1_lea */
    }
 L3319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10835 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 292;  /* *ashlhi3_1 */
    }
  goto ret0;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3565;
    }
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3566;
    }
 L3579: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3580;
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11595 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 308;  /* *ashrhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3579;

 L3580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11609 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 309;  /* *ashrhi3_1 */
    }
  goto ret0;

 L3880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3881;
    }
  goto ret0;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3882;
    }
 L3895: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3896;
    }
  goto ret0;

 L3882: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12163 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 329;  /* *lshrhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3895;

 L3896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12177 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 330;  /* *lshrhi3_1 */
    }
  goto ret0;

 L4136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4137;
    }
  goto ret0;

 L4137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4138;
    }
 L4151: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4152;
    }
  goto ret0;

 L4138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12519 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 346;  /* *rotlhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4151;

 L4152: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12533 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 347;  /* *rotlhi3_1 */
    }
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4269;
    }
  goto ret0;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4270;
    }
 L4283: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4284;
    }
  goto ret0;

 L4270: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12746 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 355;  /* *rotrhi3_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4283;

 L4284: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12760 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 356;  /* *rotrhi3 */
    }
  goto ret0;

 L11955: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11959;
  goto ret0;

 L11959: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74L:
      goto L5610;
    case 75L:
      goto L5760;
    default:
      break;
    }
  goto ret0;

 L5610: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5611;
    }
  goto ret0;

 L5611: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 489;  /* *fisthi2_floor_1 */
    }
  goto ret0;

 L5760: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5761;
    }
  goto ret0;

 L5761: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 500;  /* *fisthi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L11961;
    case ZERO_EXTRACT:
      goto L367;
    case REG:
    case SUBREG:
      goto L11822;
    default:
      goto L11823;
   }
 L11822: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L336;
    }
 L11823: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L693;
    }
 L11844: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L724;
    }
 L11847: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L815;
    }
 L11851: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1776;
    }
 L11857: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 19)
    goto L5924;
 L11852: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1125;
    }
 L11856: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5559;
    }
  goto ret0;

 L11961: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L196;
    }
  goto L11823;

 L196: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      return 28;  /* *pushsi2 */
    }
  x1 = XEXP (x0, 0);
  goto L11823;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L368;
    }
  goto ret0;

 L368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L369;
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L376;
  goto ret0;

 L376: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11962;
 L370: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      return 53;  /* movsi_insv_1 */
    }
  goto ret0;

 L11962: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case LSHIFTRT:
      goto L377;
    case PLUS:
      goto L1410;
    case AND:
      goto L2233;
    case IOR:
      goto L2505;
    case XOR:
      goto L2710;
    default:
     break;
   }
  goto L370;

 L377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L378;
    }
  goto L370;

 L378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 54;  /* *movqi_insv_2 */
    }
  goto L370;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1411;
  goto L370;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1412;
    }
  goto L370;

 L1412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1413;
  goto L370;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1443;
  goto L370;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1444;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1415;
    }
  goto L370;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1445;
    }
  goto L370;

 L1445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1446;
  goto L370;

 L1446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 167;  /* *addqi_ext_2 */
    }
  goto L370;

 L1415: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 166;  /* addqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  goto L370;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2234;
  goto L370;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2235;
    }
  goto L370;

 L2235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2236;
  goto L370;

 L2236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2286;
  goto L370;

 L2286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11967;
 L2237: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2238;
    }
  goto L370;

 L11967: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2287;
    case ZERO_EXTRACT:
      goto L2317;
    default:
     break;
   }
  goto L2237;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2288;
    }
  goto L2237;

 L2288: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 219;  /* *andqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2237;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2318;
    }
  goto L2237;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2319;
  goto L2237;

 L2319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 220;  /* *andqi_ext_2 */
    }
  goto L2237;

 L2238: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 217;  /* andqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L370;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2506;
  goto L370;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2507;
    }
  goto L370;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2508;
  goto L370;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2536;
  goto L370;

 L2536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11969;
 L2509: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2510;
    }
  goto L370;

 L11969: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2537;
    case ZERO_EXTRACT:
      goto L2567;
    default:
     break;
   }
  goto L2509;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2538;
    }
  goto L2509;

 L2538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8761 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 233;  /* *iorqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2509;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2568;
    }
  goto L2509;

 L2568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2569;
  goto L2509;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 8799 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 234;  /* *iorqi_ext_2 */
    }
  goto L2509;

 L2510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8743 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;  /* iorqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L370;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2711;
  goto L370;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2712;
    }
  goto L370;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2713;
  goto L370;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2741;
  goto L370;

 L2741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11971;
 L2714: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2715;
    }
  goto L370;

 L11971: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2742;
    case ZERO_EXTRACT:
      goto L2772;
    default:
     break;
   }
  goto L2714;

 L2742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2743;
    }
  goto L2714;

 L2743: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9099 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 244;  /* *xorqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2714;

 L2772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2773;
    }
  goto L2714;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2774;
  goto L2714;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 9137 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 245;  /* *xorqi_ext_2 */
    }
  goto L2714;

 L2715: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9081 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 243;  /* xorqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L370;

 L336: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11973;
 L235: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L236;
    }
 L245: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L246;
    }
  x1 = XEXP (x0, 0);
  goto L11823;

 L11973: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L337;
    case ZERO_EXTRACT:
      goto L355;
    case ZERO_EXTEND:
      goto L460;
    case SIGN_EXTEND:
      goto L554;
    case FIX:
      goto L679;
    default:
     break;
   }
  goto L235;

 L337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L338;
    }
  goto L235;

 L338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L339;
  goto L235;

 L339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 48;  /* *movsi_extv_1 */
    }
  goto L235;

 L355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L356;
    }
  goto L235;

 L356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L357;
  goto L235;

 L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 51;  /* *movsi_extzv_1 */
    }
  goto L235;

 L460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11978;
    case QImode:
      goto L11980;
    default:
      break;
    }
  goto L235;

 L11978: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L461;
    }
 L11979: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L466;
    }
  goto L235;

 L461: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2984 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 71;  /* zero_extendhisi2_and */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11979;

 L466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3001 "../../gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 72;  /* *zero_extendhisi2_movzwl */
    }
  x1 = XEXP (x0, 1);
  goto L235;

 L11980: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L507;
    }
  goto L235;

 L507: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3088 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 76;  /* *zero_extendqisi2_and */
    }
 L519: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3097 "../../gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 77;  /* *zero_extendqisi2_movzbw_and */
    }
 L524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3105 "../../gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 78;  /* *zero_extendqisi2_movzbw */
    }
  x1 = XEXP (x0, 1);
  goto L235;

 L554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11981;
    case QImode:
      goto L11982;
    default:
      break;
    }
  goto L235;

 L11981: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 81;  /* extendhisi2 */
    }
  goto L235;

 L11982: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 83;  /* extendqisi2 */
    }
  goto L235;

 L679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11983;
    case DFmode:
      goto L11984;
    default:
      break;
    }
  goto L235;

 L11983: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L680;
    }
  goto L235;

 L680: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4129 "../../gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 103;  /* fix_truncsfsi_sse */
    }
  x1 = XEXP (x0, 1);
  goto L235;

 L11984: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L685;
    }
  goto L235;

 L685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4138 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 104;  /* fix_truncdfsi_sse */
    }
  x1 = XEXP (x0, 1);
  goto L235;

 L236: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1130 "../../gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 32;  /* *movsi_xor */
    }
  x1 = XEXP (x0, 1);
  goto L245;

 L246: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1140 "../../gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 33;  /* *movsi_or */
    }
  x1 = XEXP (x0, 0);
  goto L11823;

 L693: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L694;
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L250;
    }
  x1 = XEXP (x0, 0);
  goto L11844;

 L694: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L695;
    }
  x1 = XEXP (x0, 0);
  goto L11844;

 L695: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4166 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 106;  /* fix_truncsi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11844;

 L250: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1156 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 34;  /* *movsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11844;

 L724: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L725;
  x1 = XEXP (x0, 0);
  goto L11847;

 L725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L726;
    }
  x1 = XEXP (x0, 0);
  goto L11847;

 L726: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 109;  /* fix_truncsi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L11847;

 L815: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11985;
  x1 = XEXP (x0, 0);
  goto L11851;

 L11985: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L816;
    case PLUS:
      goto L1059;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11851;

 L816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L817;
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L817: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 115;  /* *fix_truncsi_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1060;
  x1 = XEXP (x0, 0);
  goto L11851;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1061;
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L1061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1062;
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L1062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1063;
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L1063: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4836 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 141;  /* addsi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L11851;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11987;
 L1088: ATTRIBUTE_UNUSED_LABEL
  if (no_seg_address_operand (x1, SImode))
    {
      operands[1] = x1;
      return 144;  /* *lea_1 */
    }
 L1655: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == SImode)
    goto L11996;
  x1 = XEXP (x0, 0);
  goto L11857;

 L11987: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1777;
    case UNSPEC:
      goto L11999;
    case FFS:
      goto L4823;
    case CTZ:
      goto L4859;
    case IF_THEN_ELSE:
      goto L6191;
    default:
     break;
   }
  goto L1088;

 L1777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1778;
  goto L1088;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1779;
  goto L1088;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L12004;
  goto L1088;

 L12004: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L1780;
    case SIGN_EXTEND:
      goto L1805;
    default:
     break;
   }
  goto L1088;

 L1780: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1781;
    }
  goto L1088;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1782;
  goto L1088;

 L1782: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1783;
    }
  goto L1088;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7173 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 189;  /* *umulsi3_highpart_insn */
    }
  goto L1088;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1806;
    }
  goto L1088;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1807;
  goto L1088;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1808;
    }
  goto L1088;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7265 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 190;  /* *smulsi3_highpart_insn */
    }
  goto L1088;

 L11999: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L12006;
    case 3:
      goto L12007;
    case 2:
      goto L12008;
    default:
      break;
    }
  goto L1088;

 L12006: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 12L:
      goto L4793;
    case 16L:
      goto L4982;
    case 66L:
      goto L5550;
    default:
      break;
    }
  goto L1088;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 395;  /* set_got */
    }
  goto L1088;

 L4982: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 408;  /* *load_tp_si */
    }
  goto L1088;

 L5550: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5551;
    }
  goto L1088;

 L5551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16995 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 482;  /* *fistsi2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L12007: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 17)
    goto L4893;
  goto L1088;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4894;
    }
  goto L1088;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (tls_symbolic_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4895;
    }
  goto L1088;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (call_insn_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4896;
    }
  goto L1088;

 L4896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14478 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 403;  /* *tls_global_dynamic_32_gnu */
    }
 L4916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14492 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 404;  /* *tls_global_dynamic_32_sun */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L12008: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 18)
    goto L4932;
  goto L1088;

 L4932: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4933;
    }
  goto L1088;

 L4933: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_insn_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4934;
    }
  goto L1088;

 L4934: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14549 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 405;  /* *tls_local_dynamic_base_32_gnu */
    }
 L4952: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14562 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 406;  /* *tls_local_dynamic_base_32_sun */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L4823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4824;
    }
  goto L1088;

 L4824: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14320 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 398;  /* *ffs_cmove */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L4859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4860;
    }
  goto L1088;

 L4860: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 401;  /* ctzsi2 */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L6191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_carry_flag_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6192;
    }
 L6197: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6198;
    }
  goto L1088;

 L6192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L6193;
  x2 = XEXP (x1, 0);
  goto L6197;

 L6193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 527;  /* x86_movsicc_0_m1 */
    }
  x2 = XEXP (x1, 0);
  goto L6197;

 L6198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6199;
  goto L1088;

 L6199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6200;
  goto L1088;

 L6200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6201;
    }
  goto L1088;

 L6201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6202;
    }
  goto L1088;

 L6202: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18675 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 528;  /* *movsicc_noc */
    }
  x1 = XEXP (x0, 1);
  goto L1088;

 L11996: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1656;
    case MINUS:
      goto L4873;
    case PLUS:
      goto L4972;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11857;

 L1656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1657;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1658;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L1658: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6862 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 182;  /* *mulsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (31)])
    goto L4874;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CLZ)
    goto L4875;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4876;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4876: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 402;  /* *bsr */
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L12011;
  x1 = XEXP (x0, 0);
  goto L11857;

 L12011: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L12013;
  x1 = XEXP (x0, 0);
  goto L11857;

 L12013: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L12015;
    case 1:
      goto L12016;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L12015: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 18)
    goto L4973;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4974;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4974: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_insn_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4975;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CONST)
    goto L4976;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 6)
    goto L4977;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4977: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4978;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4978: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 407;  /* *tls_local_dynamic_32_once */
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L12016: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 16)
    goto L4996;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4996: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4997;
  x1 = XEXP (x0, 0);
  goto L11857;

 L4997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4998;
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L4998: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 409;  /* *add_tp_si */
    }
  x1 = XEXP (x0, 0);
  goto L11857;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 513;  /* cld */
    }
  x1 = XEXP (x0, 0);
  goto L11852;

 L1125: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L12017;
  x1 = XEXP (x0, 0);
  goto L11856;

 L12017: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1126;
    case MINUS:
      goto L1510;
    case AND:
      goto L2100;
    case IOR:
      goto L2331;
    case XOR:
      goto L2581;
    case NEG:
      goto L2864;
    case NOT:
      goto L3163;
    case ASHIFT:
      goto L3258;
    case ASHIFTRT:
      goto L3460;
    case LSHIFTRT:
      goto L3790;
    case ROTATE:
      goto L4108;
    case ROTATERT:
      goto L4240;
    case FFS:
      goto L4837;
    case UNSPEC:
      goto L12032;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1127;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1128;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1128: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5350 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 148;  /* *addsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1511;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1512;
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1528;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1513;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1514;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6589 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 171;  /* subsi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L1528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6621 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 172;  /* *subsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2101;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2102;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2102: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8082 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 208;  /* *andsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L12035;
  x1 = XEXP (x0, 0);
  goto L11856;

 L12035: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L3240;
    case ASHIFTRT:
      goto L3442;
    case REG:
    case SUBREG:
    case MEM:
      goto L12034;
    default:
      x1 = XEXP (x0, 0);
      goto L11856;
   }
 L12034: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2332;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3241;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3242;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3243;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3244;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L3245;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L3246;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 287;  /* x86_shld_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3443;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3444;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L3445;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3446;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L3447;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3447: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L3448;
  x1 = XEXP (x0, 0);
  goto L11856;

 L3448: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 300;  /* x86_shrd_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2333;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8537 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 221;  /* *iorsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2582;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2583;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8913 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 235;  /* *xorsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2865;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L2865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9398 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;  /* *negsi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3164;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10028 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 280;  /* *one_cmplsi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3259;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3260;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3260: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10538 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 288;  /* *ashlsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3461;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L12037;
 L3489: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3490;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L12037: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3462;
    }
 L12038: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3476;
    }
  goto L3489;

 L3462: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11403 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 301;  /* ashrsi3_31 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L12038;

 L3476: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11444 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 302;  /* *ashrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3489;

 L3490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11469 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 303;  /* *ashrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3791;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3792;
    }
 L3805: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3806;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L3792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12011 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 323;  /* *lshrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3805;

 L3806: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12036 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 324;  /* *lshrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4109;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4110;
    }
 L4123: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4124;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4110: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12460 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 344;  /* *rotlsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4123;

 L4124: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12486 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 345;  /* *rotlsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4241;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4242;
    }
 L4255: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4256;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4242: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12684 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 353;  /* *rotrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4255;

 L4256: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 354;  /* *rotrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4838;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L4838: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 399;  /* *ffs_no_cmove */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L12032: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L12039;
  x1 = XEXP (x0, 0);
  goto L11856;

 L12039: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74L:
      goto L5622;
    case 75L:
      goto L5772;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L5622: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5623;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L5623: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 490;  /* *fistsi2_floor_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L5772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5773;
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L5773: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 501;  /* *fistsi2_ceil_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11856;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 66)
    goto L5560;
  goto ret0;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5561;
    }
  goto ret0;

 L5561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17014 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 484;  /* fistsi2 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L298;
    }
 L11827: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L348;
    }
 L11853: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1683;
    }
  goto ret0;

 L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, QImode))
    {
      operands[1] = x1;
      return 42;  /* *pushqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L11827;

 L348: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L12041;
 L301: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L302;
    }
 L360: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == SUBREG
      && XINT (x1, 1) == 0)
    goto L361;
  x1 = XEXP (x0, 0);
  goto L11853;

 L12041: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L349;
    case PLUS:
      goto L1023;
    case MINUS:
      goto L1474;
    case AND:
      goto L2154;
    case IOR:
      goto L2421;
    case XOR:
      goto L2671;
    case NEG:
      goto L2910;
    case NOT:
      goto L3195;
    case ASHIFT:
      goto L3362;
    case ASHIFTRT:
      goto L3654;
    case LSHIFTRT:
      goto L3970;
    case ROTATE:
      goto L4180;
    case ROTATERT:
      goto L4296;
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
    case LTGT:
      goto L12054;
    default:
      goto L301;
   }
 L12054: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L4348;
    }
  goto L301;

 L349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L350;
    }
  goto L301;

 L350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L351;
  goto L301;

 L351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 50;  /* *movqi_extv_1 */
    }
  goto L301;

 L1023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L12055;
  goto L301;

 L12055: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1024;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1295;
    }
  goto L301;

 L1024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, QImode))
    {
      operands[3] = x3;
      goto L1025;
    }
  goto L301;

 L1025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1026;
    }
  goto L301;

 L1026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1027;
    }
  goto L301;

 L1027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4812 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 139;  /* addqi3_carry */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L1295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1296;
    }
  goto L301;

 L1296: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6035 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 159;  /* *addqi_1_lea */
    }
 L1310: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6085 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 160;  /* *addqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L1474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1475;
    }
  goto L301;

 L1475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1476;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1604;
    }
  goto L301;

 L1476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, QImode))
    {
      operands[3] = x3;
      goto L1477;
    }
  goto L301;

 L1477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1478;
    }
  goto L301;

 L1478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6565 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 169;  /* subqi3_carry */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L1604: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6750 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 178;  /* *subqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2155;
    }
  goto L301;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2156;
    }
  goto L301;

 L2156: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8250 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 212;  /* *andqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2422;
    }
  goto L301;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2423;
    }
  goto L301;

 L2423: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8674 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 227;  /* *iorqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2672;
    }
  goto L301;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2673;
    }
  goto L301;

 L2673: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9051 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 241;  /* *xorqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2911;
    }
  goto L301;

 L2911: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9485 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 255;  /* *negqi2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3196;
    }
  goto L301;

 L3196: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10148 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 284;  /* *one_cmplqi2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L3362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3363;
    }
  goto L301;

 L3363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3364;
    }
  goto L301;

 L3364: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10955 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 295;  /* *ashlqi3_1_lea */
    }
 L3378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11011 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 296;  /* *ashlqi3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L3654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3655;
    }
  goto L301;

 L3655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3656;
    }
 L3685: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3686;
    }
  goto L301;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11694 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 314;  /* *ashrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3685;

 L3686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11723 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 316;  /* *ashrqi3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L3970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3971;
    }
  goto L301;

 L3971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3972;
    }
 L4001: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4002;
    }
  goto L301;

 L3972: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12262 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 335;  /* *lshrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4001;

 L4002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12290 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 337;  /* *lshrqi3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L4180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4181;
    }
  goto L301;

 L4181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4182;
    }
 L4211: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4212;
    }
  goto L301;

 L4182: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12567 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 349;  /* *rotlqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4211;

 L4212: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 351;  /* *rotlqi3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L4296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4297;
    }
  goto L301;

 L4297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4298;
    }
 L4327: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4328;
    }
  goto L301;

 L4298: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12780 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 357;  /* *rotrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4327;

 L4328: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12808 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 359;  /* *rotrqi3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L301;

 L4348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4349;
  goto L301;

 L4349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 361;  /* *setcc_1 */
    }
  goto L301;

 L302: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1465 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 43;  /* *movqi_1 */
    }
  x1 = XEXP (x0, 1);
  goto L360;

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L362;
  x1 = XEXP (x0, 0);
  goto L11853;

 L362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L363;
    }
  x1 = XEXP (x0, 0);
  goto L11853;

 L363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L364;
  x1 = XEXP (x0, 0);
  goto L11853;

 L364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 52;  /* *movqi_extzv_2 */
    }
  x1 = XEXP (x0, 0);
  goto L11853;

 L1683: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L12057;
  goto ret0;

 L12057: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1684;
    case DIV:
      goto L1820;
    case UDIV:
      goto L1834;
    case IF_THEN_ELSE:
      goto L6215;
    default:
     break;
   }
  goto ret0;

 L1684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1685;
    }
  goto ret0;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1686;
    }
  goto ret0;

 L1686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6946 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 184;  /* *mulqi3_1 */
    }
  goto ret0;

 L1820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1821;
    }
  goto ret0;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1822;
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7325 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 191;  /* divqi3 */
    }
  goto ret0;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1835;
    }
  goto ret0;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1836;
    }
  goto ret0;

 L1836: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7335 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 192;  /* udivqi3 */
    }
  goto ret0;

 L6215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6216;
    }
  goto ret0;

 L6216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (flags_reg_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L6217;
    }
  goto ret0;

 L6217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6218;
  goto ret0;

 L6218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6219;
    }
  goto ret0;

 L6219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L6220;
    }
  goto ret0;

 L6220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18720 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
    {
      return 530;  /* *movqicc_noc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L635;
    case FLOAT:
      goto L934;
    case UNSPEC:
      goto L12102;
    case NEG:
      goto L3097;
    case ABS:
      goto L3112;
    case SQRT:
      goto L5214;
    case IF_THEN_ELSE:
      goto L6224;
    case SMIN:
      goto L6251;
    case SMAX:
      goto L6257;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12091;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L12092;
    default:
      goto ret0;
   }
 L12091: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, SFmode))
    {
      operands[1] = x1;
      goto L4359;
    }
 L12092: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, SFmode))
    {
      operands[3] = x1;
      goto L5002;
    }
  goto ret0;

 L635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L636;
    }
  goto ret0;

 L636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3862 "../../gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 96;  /* truncxfsf2_i387_noop */
    }
  goto ret0;

 L934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L12109;
    case SImode:
      goto L12110;
    case DImode:
      goto L12111;
    default:
      break;
    }
  goto ret0;

 L12109: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L935;
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 125;  /* *floathisf2_i387 */
    }
  goto ret0;

 L12110: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L940;
    }
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4444 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387))
    {
      return 126;  /* *floatsisf2_mixed */
    }
 L945: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4459 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 127;  /* *floatsisf2_sse */
    }
 L950: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4469 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 128;  /* *floatsisf2_i387 */
    }
  goto ret0;

 L12111: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L955;
    }
  goto ret0;

 L955: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4512 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 129;  /* *floatdisf2_i387 */
    }
  goto ret0;

 L12102: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L12112;
    case 4:
      goto L12113;
    case 1:
      goto L12114;
    case 2:
      goto L12116;
    default:
      break;
    }
  goto ret0;

 L12112: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L2977;
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (vector_move_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L2978;
    }
  goto ret0;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2979;
    }
  goto ret0;

 L2979: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[3] = x2;
      goto L2980;
    }
  goto ret0;

 L2980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9562 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 260;  /* copysignsf3_const */
    }
  goto ret0;

 L12113: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L2995;
  goto ret0;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2996;
    }
  goto ret0;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2997;
    }
  goto ret0;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[4] = x2;
      goto L2998;
    }
  goto ret0;

 L2998: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[5] = x2;
      goto L2999;
    }
  goto ret0;

 L2999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9580 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 261;  /* copysignsf3_var */
    }
  goto ret0;

 L12114: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60L:
      goto L5302;
    case 61L:
      goto L5323;
    default:
      break;
    }
  goto ret0;

 L5302: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5303;
    }
  goto ret0;

 L5303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15496 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 455;  /* *sinsf2 */
    }
  goto ret0;

 L5323: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5324;
    }
  goto ret0;

 L5324: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15537 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 459;  /* *cossf2 */
    }
  goto ret0;

 L12116: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62L:
      goto L5428;
    case 51L:
      goto L6275;
    case 52L:
      goto L6281;
    default:
      break;
    }
  goto ret0;

 L5428: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5429;
    }
  goto ret0;

 L5429: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5430;
    }
  goto ret0;

 L5430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15895 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 470;  /* atan2sf3_1 */
    }
  goto ret0;

 L6275: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6276;
    }
  goto ret0;

 L6276: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6277;
    }
  goto ret0;

 L6277: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18890 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 538;  /* *ieee_sminsf3 */
    }
  goto ret0;

 L6281: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6282;
    }
  goto ret0;

 L6282: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6283;
    }
  goto ret0;

 L6283: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18900 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 539;  /* *ieee_smaxsf3 */
    }
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3098;
    }
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9876 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 268;  /* *negsf2_1 */
    }
  goto ret0;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3113;
    }
  goto ret0;

 L3113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9900 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 271;  /* *abssf2_1 */
    }
  goto ret0;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L12119;
  goto ret0;

 L12119: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5215;
    }
 L12120: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5225;
    }
  goto ret0;

 L5215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15208 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387))
    {
      return 442;  /* *sqrtsf2_mixed */
    }
 L5220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15219 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 443;  /* *sqrtsf2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12120;

 L5225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15228 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 444;  /* *sqrtsf2_i387 */
    }
  goto ret0;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6225;
    }
  goto ret0;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6226;
  goto ret0;

 L6226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6227;
  goto ret0;

 L6227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6228;
    }
  goto ret0;

 L6228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L6229;
    }
  goto ret0;

 L6229: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18747 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 531;  /* *movsfcc_1_387 */
    }
  goto ret0;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6252;
    }
  goto ret0;

 L6252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6253;
    }
  goto ret0;

 L6253: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18847 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 534;  /* sminsf3 */
    }
  goto ret0;

 L6257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6258;
    }
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6259;
    }
  goto ret0;

 L6259: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18856 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 535;  /* smaxsf3 */
    }
  goto ret0;

 L4359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4360;
    }
  goto ret0;

 L4360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4361;
    }
  goto ret0;

 L4361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13245 "../../gcc/config/i386/i386.md"
(TARGET_SSE))
    {
      return 363;  /* *sse_setccsf */
    }
  goto ret0;

 L5002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L12124;
  goto ret0;

 L12124: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L5039;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5003;
    }
 L12122: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5027;
    }
 L12123: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5033;
    }
  goto ret0;

 L5039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12125;
    case SImode:
      goto L12126;
    default:
      break;
    }
  goto ret0;

 L12125: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5040;
    }
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5041;
    }
  goto ret0;

 L5041: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14809 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 416;  /* *fop_sf_2hi_i387 */
    }
  goto ret0;

 L12126: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5047;
    }
  goto ret0;

 L5047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5048;
    }
  goto ret0;

 L5048: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14809 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 417;  /* *fop_sf_2si_i387 */
    }
  goto ret0;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5004;
    }
  x2 = XEXP (x1, 0);
  goto L12122;

 L5004: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14697 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 410;  /* *fop_sf_comm_mixed */
    }
 L5010: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14716 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 411;  /* *fop_sf_comm_sse */
    }
 L5016: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14731 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 412;  /* *fop_sf_comm_i387 */
    }
 L5022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14746 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 413;  /* *fop_sf_1_mixed */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12122;

 L5027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L12128;
  x2 = XEXP (x1, 0);
  goto L12123;

 L12128: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L5054;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5028;
    }
  x2 = XEXP (x1, 0);
  goto L12123;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12129;
    case SImode:
      goto L12130;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12123;

 L12129: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5055;
    }
  x2 = XEXP (x1, 0);
  goto L12123;

 L5055: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14826 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 418;  /* *fop_sf_3hi_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12123;

 L12130: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5062;
    }
  x2 = XEXP (x1, 0);
  goto L12123;

 L5062: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14826 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 419;  /* *fop_sf_3si_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12123;

 L5028: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14772 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 414;  /* *fop_sf_1_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12123;

 L5033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5034;
    }
  goto ret0;

 L5034: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14790 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 415;  /* *fop_sf_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L661;
    case FLOAT:
      goto L959;
    case UNSPEC:
      goto L12148;
    case NEG:
      goto L3102;
    case ABS:
      goto L3117;
    case SQRT:
      goto L5229;
    case IF_THEN_ELSE:
      goto L6233;
    case SMIN:
      goto L6263;
    case SMAX:
      goto L6269;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12137;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L12138;
    default:
      goto ret0;
   }
 L12137: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, DFmode))
    {
      operands[1] = x1;
      goto L4365;
    }
 L12138: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, DFmode))
    {
      operands[3] = x1;
      goto L5066;
    }
  goto ret0;

 L661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L662;
    }
  goto ret0;

 L662: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3960 "../../gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 100;  /* truncxfdf2_i387_noop */
    }
  goto ret0;

 L959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L12155;
    case SImode:
      goto L12156;
    case DImode:
      goto L12157;
    default:
      break;
    }
  goto ret0;

 L12155: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L960;
    }
  goto ret0;

 L960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4537 "../../gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)))
    {
      return 130;  /* *floathidf2_i387 */
    }
  goto ret0;

 L12156: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L965;
    }
  goto ret0;

 L965: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4555 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 131;  /* *floatsidf2_mixed */
    }
 L970: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4570 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 132;  /* *floatsidf2_sse */
    }
 L975: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4580 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 133;  /* *floatsidf2_i387 */
    }
  goto ret0;

 L12157: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L980;
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4623 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 134;  /* *floatdidf2_i387 */
    }
  goto ret0;

 L12148: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L12158;
    case 4:
      goto L12159;
    case 1:
      goto L12160;
    case 2:
      goto L12162;
    default:
      break;
    }
  goto ret0;

 L12158: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L3054;
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (vector_move_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L3055;
    }
  goto ret0;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3056;
    }
  goto ret0;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[3] = x2;
      goto L3057;
    }
  goto ret0;

 L3057: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9658 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 265;  /* copysigndf3_const */
    }
  goto ret0;

 L12159: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L3072;
  goto ret0;

 L3072: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3073;
    }
  goto ret0;

 L3073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L3074;
    }
  goto ret0;

 L3074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[4] = x2;
      goto L3075;
    }
  goto ret0;

 L3075: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[5] = x2;
      goto L3076;
    }
  goto ret0;

 L3076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9676 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 266;  /* copysigndf3_var */
    }
  goto ret0;

 L12160: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60L:
      goto L5297;
    case 61L:
      goto L5318;
    default:
      break;
    }
  goto ret0;

 L5297: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12166;
  goto ret0;

 L12166: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L5308;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5298;
    }
  goto ret0;

 L5308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5309;
    }
  goto ret0;

 L5309: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15508 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 456;  /* *sinextendsfdf2 */
    }
  goto ret0;

 L5298: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15486 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 454;  /* *sindf2 */
    }
  goto ret0;

 L5318: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12168;
  goto ret0;

 L12168: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L5329;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5319;
    }
  goto ret0;

 L5329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5330;
    }
  goto ret0;

 L5330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15549 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 460;  /* *cosextendsfdf2 */
    }
  goto ret0;

 L5319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15527 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 458;  /* *cosdf2 */
    }
  goto ret0;

 L12162: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62L:
      goto L5413;
    case 51L:
      goto L6287;
    case 52L:
      goto L6293;
    default:
      break;
    }
  goto ret0;

 L5413: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5414;
    }
  goto ret0;

 L5414: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5415;
    }
  goto ret0;

 L5415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15854 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 469;  /* atan2df3_1 */
    }
  goto ret0;

 L6287: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6288;
    }
  goto ret0;

 L6288: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6289;
    }
  goto ret0;

 L6289: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18910 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 540;  /* *ieee_smindf3 */
    }
  goto ret0;

 L6293: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6294;
    }
  goto ret0;

 L6294: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6295;
    }
  goto ret0;

 L6295: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18920 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 541;  /* *ieee_smaxdf3 */
    }
  goto ret0;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12170;
  goto ret0;

 L12170: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3128;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3103;
    }
  goto ret0;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3129;
    }
  goto ret0;

 L3129: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9925 "../../gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 274;  /* *negextendsfdf2 */
    }
  goto ret0;

 L3103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9884 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 269;  /* *negdf2_1 */
    }
  goto ret0;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12172;
  goto ret0;

 L12172: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3146;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3118;
    }
  goto ret0;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3147;
    }
  goto ret0;

 L3147: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9952 "../../gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 277;  /* *absextendsfdf2 */
    }
  goto ret0;

 L3118: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9908 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 272;  /* *absdf2_1 */
    }
  goto ret0;

 L5229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12175;
  goto ret0;

 L12175: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L5245;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5230;
    }
 L12174: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5240;
    }
  goto ret0;

 L5245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5246;
    }
  goto ret0;

 L5246: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15276 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)))
    {
      return 448;  /* *sqrtextendsfdf2_i387 */
    }
  goto ret0;

 L5230: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15246 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 445;  /* *sqrtdf2_mixed */
    }
 L5235: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15257 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 446;  /* *sqrtdf2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12174;

 L5240: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15266 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 447;  /* *sqrtdf2_i387 */
    }
  goto ret0;

 L6233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6234;
    }
  goto ret0;

 L6234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6235;
  goto ret0;

 L6235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6236;
  goto ret0;

 L6236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6237;
    }
  goto ret0;

 L6237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L6238;
    }
  goto ret0;

 L6238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18771 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 532;  /* *movdfcc_1 */
    }
  goto ret0;

 L6263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6264;
    }
  goto ret0;

 L6264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6265;
    }
  goto ret0;

 L6265: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18865 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 536;  /* smindf3 */
    }
  goto ret0;

 L6269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6270;
    }
  goto ret0;

 L6270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6271;
    }
  goto ret0;

 L6271: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18874 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 537;  /* smaxdf3 */
    }
  goto ret0;

 L4365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4366;
    }
  goto ret0;

 L4366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4367;
    }
  goto ret0;

 L4367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13255 "../../gcc/config/i386/i386.md"
(TARGET_SSE2))
    {
      return 364;  /* *sse_setccdf */
    }
  goto ret0;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12179;
  goto ret0;

 L12179: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L5103;
    case FLOAT_EXTEND:
      goto L5131;
    case REG:
    case SUBREG:
    case MEM:
      goto L12176;
    default:
      goto L12177;
   }
 L12176: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5067;
    }
 L12177: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5091;
    }
 L12178: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5097;
    }
  goto ret0;

 L5103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12181;
    case SImode:
      goto L12182;
    default:
      break;
    }
  goto ret0;

 L12181: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5104;
    }
  goto ret0;

 L5104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5105;
    }
  goto ret0;

 L5105: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14955 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 426;  /* *fop_df_2hi_i387 */
    }
  goto ret0;

 L12182: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5111;
    }
  goto ret0;

 L5111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5112;
    }
  goto ret0;

 L5112: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14955 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 427;  /* *fop_df_2si_i387 */
    }
  goto ret0;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L12183;
  goto ret0;

 L12183: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5132;
    }
 L12184: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5146;
    }
  goto ret0;

 L5132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5133;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12184;

 L5133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14991 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 430;  /* *fop_df_4_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12184;

 L5146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L5147;
  goto ret0;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5148;
    }
  goto ret0;

 L5148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15027 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 432;  /* *fop_df_6_i387 */
    }
  goto ret0;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5068;
    }
  x2 = XEXP (x1, 0);
  goto L12177;

 L5068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14843 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 420;  /* *fop_df_comm_mixed */
    }
 L5074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14862 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 421;  /* *fop_df_comm_sse */
    }
 L5080: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14877 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 422;  /* *fop_df_comm_i387 */
    }
 L5086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14892 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 423;  /* *fop_df_1_mixed */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12177;

 L5091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L12186;
  x2 = XEXP (x1, 0);
  goto L12178;

 L12186: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L5118;
    case FLOAT_EXTEND:
      goto L5139;
    case REG:
    case SUBREG:
    case MEM:
      goto L12185;
    default:
      x2 = XEXP (x1, 0);
      goto L12178;
   }
 L12185: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5092;
    }
  x2 = XEXP (x1, 0);
  goto L12178;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12188;
    case SImode:
      goto L12189;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12178;

 L12188: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5119;
    }
  x2 = XEXP (x1, 0);
  goto L12178;

 L5119: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14973 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 428;  /* *fop_df_3hi_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12178;

 L12189: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5126;
    }
  x2 = XEXP (x1, 0);
  goto L12178;

 L5126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14973 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 429;  /* *fop_df_3si_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12178;

 L5139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5140;
    }
  x2 = XEXP (x1, 0);
  goto L12178;

 L5140: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15009 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 431;  /* *fop_df_5_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12178;

 L5092: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14918 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 424;  /* *fop_df_1_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12178;

 L5097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5098;
    }
  goto ret0;

 L5098: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14936 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 425;  /* *fop_df_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L984;
    case NEG:
      goto L3107;
    case ABS:
      goto L3122;
    case SQRT:
      goto L5250;
    case UNSPEC:
      goto L12209;
    case IF_THEN_ELSE:
      goto L6242;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L12195;
    default:
      goto ret0;
   }
 L12195: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, XFmode))
    {
      operands[3] = x1;
      goto L5152;
    }
  goto ret0;

 L984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L12220;
    case SImode:
      goto L12221;
    case DImode:
      goto L12222;
    default:
      break;
    }
  goto ret0;

 L12220: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L985;
    }
  goto ret0;

 L985: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4635 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 135;  /* floathixf2 */
    }
  goto ret0;

 L12221: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L990;
    }
  goto ret0;

 L990: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4647 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 136;  /* floatsixf2 */
    }
  goto ret0;

 L12222: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L995;
    }
  goto ret0;

 L995: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4659 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 137;  /* floatdixf2 */
    }
  goto ret0;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L12224;
  goto ret0;

 L12224: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3134;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L3108;
    }
  goto ret0;

 L3134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L12225;
    case SFmode:
      goto L12226;
    default:
      break;
    }
  goto ret0;

 L12225: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3135;
    }
  goto ret0;

 L3135: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9934 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 275;  /* *negextenddfxf2 */
    }
  goto ret0;

 L12226: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3141;
    }
  goto ret0;

 L3141: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9943 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 276;  /* *negextendsfxf2 */
    }
  goto ret0;

 L3108: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9892 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 270;  /* *negxf2_1 */
    }
  goto ret0;

 L3122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L12228;
  goto ret0;

 L12228: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3152;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L3123;
    }
  goto ret0;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L12229;
    case SFmode:
      goto L12230;
    default:
      break;
    }
  goto ret0;

 L12229: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3153;
    }
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9961 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 278;  /* *absextenddfxf2 */
    }
  goto ret0;

 L12230: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3159;
    }
  goto ret0;

 L3159: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9970 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 279;  /* *absextendsfxf2 */
    }
  goto ret0;

 L3123: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9916 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
    {
      return 273;  /* *absxf2_1 */
    }
  goto ret0;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L12232;
  goto ret0;

 L12232: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L5256;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5251;
    }
  goto ret0;

 L5256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L12233;
    case DFmode:
      goto L12234;
    default:
      break;
    }
  goto ret0;

 L12233: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5257;
    }
  goto ret0;

 L5257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15297 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 450;  /* *sqrtextendsfxf2_i387 */
    }
  goto ret0;

 L12234: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5263;
    }
  goto ret0;

 L5263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15307 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 451;  /* *sqrtextenddfxf2_i387 */
    }
  goto ret0;

 L5251: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15286 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ))
    {
      return 449;  /* sqrtxf2 */
    }
  goto ret0;

 L12209: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L12235;
    case 2:
      goto L12237;
    default:
      break;
    }
  goto ret0;

 L12235: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60L:
      goto L5313;
    case 61L:
      goto L5334;
    case 67L:
      goto L5488;
    case 65L:
      goto L5504;
    case 70L:
      goto L5588;
    case 71L:
      goto L5738;
    case 72L:
      goto L5888;
    case 73L:
      goto L5910;
    default:
      break;
    }
  goto ret0;

 L5313: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5314;
    }
  goto ret0;

 L5314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15518 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 457;  /* *sinxf2 */
    }
  goto ret0;

 L5334: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5335;
    }
  goto ret0;

 L5335: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15559 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 461;  /* *cosxf2 */
    }
  goto ret0;

 L5488: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5489;
    }
  goto ret0;

 L5489: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16427 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 475;  /* *f2xm1xf2 */
    }
  goto ret0;

 L5504: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5505;
    }
  goto ret0;

 L5505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16871 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 477;  /* frndintxf2 */
    }
  goto ret0;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5589;
    }
  goto ret0;

 L5589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17067 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 487;  /* frndintxf2_floor */
    }
  goto ret0;

 L5738: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5739;
    }
  goto ret0;

 L5739: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17308 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 498;  /* frndintxf2_ceil */
    }
  goto ret0;

 L5888: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5889;
    }
  goto ret0;

 L5889: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17549 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 509;  /* frndintxf2_trunc */
    }
  goto ret0;

 L5910: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5911;
    }
  goto ret0;

 L5911: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17632 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 511;  /* frndintxf2_mask_pm */
    }
  goto ret0;

 L12237: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62L:
      goto L5443;
    case 63L:
      goto L5458;
    case 64L:
      goto L5473;
    default:
      break;
    }
  goto ret0;

 L5443: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5444;
    }
  goto ret0;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5445;
    }
  goto ret0;

 L5445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15936 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 471;  /* atan2xf3_1 */
    }
  goto ret0;

 L5458: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5459;
    }
  goto ret0;

 L5459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5460;
    }
  goto ret0;

 L5460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16112 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 472;  /* fyl2x_xf3 */
    }
  goto ret0;

 L5473: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5474;
    }
  goto ret0;

 L5474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5475;
    }
  goto ret0;

 L5475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16298 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 473;  /* fyl2xp1_xf3 */
    }
  goto ret0;

 L6242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6243;
    }
  goto ret0;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6244;
  goto ret0;

 L6244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6245;
  goto ret0;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L6246;
    }
  goto ret0;

 L6246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L6247;
    }
  goto ret0;

 L6247: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18831 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
    {
      return 533;  /* *movxfcc_1 */
    }
  goto ret0;

 L5152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L12247;
  goto ret0;

 L12247: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L5165;
    case FLOAT_EXTEND:
      goto L5193;
    case REG:
    case SUBREG:
      goto L12246;
    default:
      goto ret0;
   }
 L12246: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5153;
    }
  goto ret0;

 L5165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12249;
    case SImode:
      goto L12250;
    default:
      break;
    }
  goto ret0;

 L12249: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5166;
    }
  goto ret0;

 L5166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5167;
    }
  goto ret0;

 L5167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15074 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP))
    {
      return 435;  /* *fop_xf_2hi_i387 */
    }
  goto ret0;

 L12250: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5173;
    }
  goto ret0;

 L5173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5174;
    }
  goto ret0;

 L5174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15074 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP))
    {
      return 436;  /* *fop_xf_2si_i387 */
    }
  goto ret0;

 L5193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L5194;
    }
 L5207: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L5208;
    }
  goto ret0;

 L5194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5195;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5207;

 L5195: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15108 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 439;  /* *fop_xf_4_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L5207;

 L5208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L5209;
  goto ret0;

 L5209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5210;
    }
  goto ret0;

 L5210: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15143 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 441;  /* *fop_xf_6_i387 */
    }
  goto ret0;

 L5153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L12252;
  goto ret0;

 L12252: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L5180;
    case FLOAT_EXTEND:
      goto L5201;
    case REG:
    case SUBREG:
      goto L12251;
    default:
      goto ret0;
   }
 L12251: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5154;
    }
  goto ret0;

 L5180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12254;
    case SImode:
      goto L12255;
    default:
      break;
    }
  goto ret0;

 L12254: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L5181;
    }
  goto ret0;

 L5181: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15091 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP))
    {
      return 437;  /* *fop_xf_3hi_i387 */
    }
  goto ret0;

 L12255: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5188;
    }
  goto ret0;

 L5188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15091 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP))
    {
      return 438;  /* *fop_xf_3si_i387 */
    }
  goto ret0;

 L5201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5202;
    }
  goto ret0;

 L5202: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15125 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 440;  /* *fop_xf_5_i387 */
    }
  goto ret0;

 L5154: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15043 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 433;  /* *fop_xf_comm_i387 */
    }
 L5160: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15057 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 434;  /* *fop_xf_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12257;
    case HImode:
      goto L12259;
    case QImode:
      goto L12261;
    default:
      break;
    }
 L60: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L61;
    }
 L79: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode)
    goto L12290;
  goto ret0;

 L12257: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L10;
    case NEG:
      goto L1156;
    case PLUS:
      goto L1189;
    case AND:
      goto L2023;
    case ZERO_EXTRACT:
      goto L2085;
    case IOR:
      goto L2362;
    case XOR:
      goto L2612;
    case ASHIFT:
      goto L3289;
    case ASHIFTRT:
      goto L3519;
    case LSHIFTRT:
      goto L3835;
    case REG:
    case SUBREG:
    case MEM:
      goto L12256;
    default:
      goto L12264;
   }
 L12256: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4;
    }
 L12264: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1172;
    }
  goto ret0;

 L10: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L11;
    }
  goto ret0;

 L11: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12;
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 604 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 1;  /* *cmpsi_minus_1 */
    }
  goto ret0;

 L1156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1157;
    }
  goto ret0;

 L1157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1158;
    }
  goto ret0;

 L1158: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5592 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 150;  /* *addsi_3 */
    }
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1190;
    }
  goto ret0;

 L1190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1191;
    }
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5727 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 152;  /* *addsi_5 */
    }
  goto ret0;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12293;
  goto ret0;

 L12293: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L2052;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2024;
    }
  goto ret0;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L2053;
    }
  goto ret0;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2054;
  goto ret0;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2065;
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L12294;
 L2055: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2056;
    }
  goto ret0;

 L12294: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2066;
    case ZERO_EXTRACT:
      goto L2077;
    default:
     break;
   }
  goto L2055;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2067;
    }
  goto L2055;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7822 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 205;  /* *testqi_ext_1 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2055;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2078;
    }
  goto L2055;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2079;
  goto L2055;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2080;
  goto L2055;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7857 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 206;  /* *testqi_ext_2 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2055;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7804 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 204;  /* *testqi_ext_0 */
    }
  goto ret0;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2025;
    }
  goto ret0;

 L2025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7703 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 200;  /* testsi_1 */
    }
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2086;
    }
  goto ret0;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2087;
    }
  goto ret0;

 L2087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2088;
    }
  goto ret0;

 L2088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7870 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 207;  /* *testqi_ext_3 */
    }
  goto ret0;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2363;
    }
  goto ret0;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2364;
    }
  goto ret0;

 L2364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8611 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 223;  /* *iorsi_3 */
    }
  goto ret0;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2613;
    }
  goto ret0;

 L2613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2614;
    }
  goto ret0;

 L2614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8988 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 237;  /* *xorsi_3 */
    }
  goto ret0;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3290;
    }
  goto ret0;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3291;
    }
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 10719 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 290;  /* *ashlsi3_cconly */
    }
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3520;
    }
  goto ret0;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12296;
  goto ret0;

 L12296: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3521;
    }
 L12297: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3552;
    }
  goto ret0;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11516 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 305;  /* *ashrsi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12297;

 L3552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11562 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 307;  /* *ashrsi3_cconly */
    }
  goto ret0;

 L3835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3836;
    }
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12298;
  goto ret0;

 L12298: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3837;
    }
 L12299: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3868;
    }
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12084 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 326;  /* *lshrsi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12299;

 L3868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12130 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 328;  /* *lshrsi3_cconly */
    }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5;
    }
 L17: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L18;
    }
  x2 = XEXP (x1, 0);
  goto L12264;

 L5: ATTRIBUTE_UNUSED_LABEL
  if (
#line 591 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 0;  /* *cmpsi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L17;

 L18: ATTRIBUTE_UNUSED_LABEL
  if (
#line 620 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 2;  /* *cmpsi_1_insn */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12264;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1173;
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5688 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 151;  /* *addsi_4 */
    }
  goto ret0;

 L12259: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L29;
    case NEG:
      goto L1247;
    case PLUS:
      goto L1280;
    case AND:
      goto L2030;
    case IOR:
      goto L2407;
    case XOR:
      goto L2657;
    case ASHIFT:
      goto L3348;
    case ASHIFTRT:
      goto L3609;
    case LSHIFTRT:
      goto L3925;
    case REG:
    case SUBREG:
    case MEM:
      goto L12258;
    default:
      goto L12267;
   }
 L12258: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L23;
    }
 L12267: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1263;
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L31;
    }
  goto ret0;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 643 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 4;  /* *cmphi_minus_1 */
    }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1248;
    }
  goto ret0;

 L1248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1249;
    }
  goto ret0;

 L1249: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5907 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 156;  /* *addhi_3 */
    }
  goto ret0;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1281;
    }
  goto ret0;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1282;
    }
  goto ret0;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5987 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 158;  /* *addhi_5 */
    }
  goto ret0;

 L2030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L2031;
    }
  goto ret0;

 L2031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2032;
    }
  goto ret0;

 L2032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7725 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 201;  /* *testhi_1 */
    }
  goto ret0;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2408;
    }
  goto ret0;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2409;
    }
  goto ret0;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8654 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 226;  /* *iorhi_3 */
    }
  goto ret0;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2658;
    }
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2659;
    }
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 9031 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 240;  /* *xorhi_3 */
    }
  goto ret0;

 L3348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3349;
    }
  goto ret0;

 L3349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3350;
    }
  goto ret0;

 L3350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 10911 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 294;  /* *ashlhi3_cconly */
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3610;
    }
  goto ret0;

 L3610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12300;
  goto ret0;

 L12300: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3611;
    }
 L12301: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3642;
    }
  goto ret0;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11644 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 311;  /* *ashrhi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12301;

 L3642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11675 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 313;  /* *ashrhi3_cconly */
    }
  goto ret0;

 L3925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3926;
    }
  goto ret0;

 L3926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12302;
  goto ret0;

 L12302: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3927;
    }
 L12303: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3958;
    }
  goto ret0;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12212 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 332;  /* *lshrhi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12303;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12243 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 334;  /* *lshrhi3_cconly */
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L24;
    }
 L36: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L37;
    }
  x2 = XEXP (x1, 0);
  goto L12267;

 L24: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 3;  /* *cmphi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L36;

 L37: ATTRIBUTE_UNUSED_LABEL
  if (
#line 652 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode)))
    {
      return 5;  /* *cmphi_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12267;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1264;
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5947 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 157;  /* *addhi_4 */
    }
  goto ret0;

 L12261: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L54;
    case NEG:
      goto L1354;
    case PLUS:
      goto L1387;
    case AND:
      goto L2037;
    case IOR:
      goto L2482;
    case XOR:
      goto L2817;
    case ASHIFT:
      goto L3407;
    case ASHIFTRT:
      goto L3731;
    case LSHIFTRT:
      goto L4047;
    case REG:
    case SUBREG:
    case MEM:
      goto L12260;
    default:
      goto L12262;
   }
 L12260: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L42;
    }
 L12262: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L70;
  goto L60;

 L54: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L55;
    }
  goto L60;

 L55: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L56;
    }
  goto L60;

 L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 685 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 8;  /* *cmpqi_minus_1 */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1355;
    }
  goto L60;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1356;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L1356: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6212 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 163;  /* *addqi_3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L60;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1388;
    }
  goto L60;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1389;
    }
  goto L60;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6291 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 165;  /* *addqi_5 */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L2038;
    }
  goto L60;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2039;
    }
  goto L60;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L12304;
  x2 = XEXP (x1, 0);
  goto L60;

 L12304: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L12306;
  x2 = XEXP (x1, 0);
  goto L60;

 L12306: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7748 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)))
    {
      return 202;  /* *testqi_1_maybe_si */
    }
 L12307: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7773 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 203;  /* *testqi_1 */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L2482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2483;
    }
  goto L60;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2484;
    }
  goto L60;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8726 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 231;  /* *iorqi_3 */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L2817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2818;
    }
  goto L60;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2819;
    }
  goto L60;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 9178 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 248;  /* *xorqi_cc_2 */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3408;
    }
  goto L60;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3409;
    }
  goto L60;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11105 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 298;  /* *ashlqi3_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L3731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3732;
    }
  goto L60;

 L3732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12308;
  goto L60;

 L12308: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3733;
    }
 L12309: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3764;
    }
  goto L60;

 L3733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11771 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 319;  /* *ashrqi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12309;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11802 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 321;  /* *ashrqi3_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4048;
    }
  goto L60;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12310;
  goto L60;

 L12310: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4049;
    }
 L12311: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4080;
    }
  goto L60;

 L4049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 340;  /* *lshrqi2_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L12311;

 L4080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12369 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 342;  /* *lshrqi2_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L43;
    }
 L48: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L49;
    }
  x2 = XEXP (x1, 0);
  goto L12262;

 L43: ATTRIBUTE_UNUSED_LABEL
  if (
#line 662 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 6;  /* *cmpqi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L48;

 L49: ATTRIBUTE_UNUSED_LABEL
  if (
#line 674 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 7;  /* *cmpqi_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12262;

 L70: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L71;
  goto L60;

 L71: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L72;
    }
  goto L60;

 L72: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L73;
  goto L60;

 L73: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L74;
  goto L60;

 L74: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L75;
    }
  x2 = XEXP (x1, 0);
  goto L60;

 L75: ATTRIBUTE_UNUSED_LABEL
  if (
#line 727 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 10;  /* *cmpqi_ext_2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L60;

 L61: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L62;
  x2 = XEXP (x1, 0);
  goto L79;

 L62: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L63;
  x2 = XEXP (x1, 0);
  goto L79;

 L63: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L64;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L64: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L65;
  x2 = XEXP (x1, 0);
  goto L79;

 L65: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 699 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 9;  /* *cmpqi_ext_1 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L12290: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L80;
 L12291: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1370;
    }
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L81;
  goto L12291;

 L81: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L82;
    }
  goto L12291;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L83;
  goto L12291;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L84;
  goto L12291;

 L84: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L85;
    }
 L94: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L95;
  x2 = XEXP (x1, 0);
  goto L12291;

 L85: ATTRIBUTE_UNUSED_LABEL
  if (
#line 754 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 11;  /* cmpqi_ext_3_insn */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L94;

 L95: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L96;
  x2 = XEXP (x1, 0);
  goto L12291;

 L96: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L97;
    }
  x2 = XEXP (x1, 0);
  goto L12291;

 L97: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L98;
  x2 = XEXP (x1, 0);
  goto L12291;

 L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 786 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
    {
      return 12;  /* *cmpqi_ext_4 */
    }
  x2 = XEXP (x1, 0);
  goto L12291;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1371;
    }
  goto ret0;

 L1371: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6251 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 164;  /* *addqi_4 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12357;
    case PLUS:
      goto L7520;
    case SS_PLUS:
      goto L7544;
    case US_PLUS:
      goto L7556;
    case MINUS:
      goto L7568;
    case SS_MINUS:
      goto L7592;
    case US_MINUS:
      goto L7604;
    case UMAX:
      goto L7754;
    case UMIN:
      goto L7766;
    case EQ:
      goto L7778;
    case GT:
      goto L7796;
    case AND:
      goto L7814;
    case IOR:
      goto L7866;
    case XOR:
      goto L7890;
    case VEC_CONCAT:
      goto L7914;
    case VEC_SELECT:
      goto L7938;
    case TRUNCATE:
      goto L8160;
    default:
     break;
   }
  goto ret0;

 L12357: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 47)
    goto L6509;
  goto ret0;

 L6509: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L6510;
    }
  goto ret0;

 L6510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 569;  /* sse3_lddqu */
    }
  goto ret0;

 L7520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7521;
    }
  goto ret0;

 L7521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7522;
    }
  goto ret0;

 L7522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
    {
      return 696;  /* *addv16qi3 */
    }
  goto ret0;

 L7544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7545;
    }
  goto ret0;

 L7545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7546;
    }
  goto ret0;

 L7546: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2438 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)))
    {
      return 700;  /* sse2_ssaddv16qi3 */
    }
  goto ret0;

 L7556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7557;
    }
  goto ret0;

 L7557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7558;
    }
  goto ret0;

 L7558: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2448 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)))
    {
      return 702;  /* sse2_usaddv16qi3 */
    }
  goto ret0;

 L7568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7569;
    }
  goto ret0;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7570;
    }
  goto ret0;

 L7570: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2465 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 704;  /* *subv16qi3 */
    }
  goto ret0;

 L7592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7593;
    }
  goto ret0;

 L7593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7594;
    }
  goto ret0;

 L7594: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 708;  /* sse2_sssubv16qi3 */
    }
  goto ret0;

 L7604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7605;
    }
  goto ret0;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7606;
    }
  goto ret0;

 L7606: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2485 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 710;  /* sse2_ussubv16qi3 */
    }
  goto ret0;

 L7754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7755;
    }
  goto ret0;

 L7755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7756;
    }
  goto ret0;

 L7756: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2811 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)))
    {
      return 727;  /* *umaxv16qi3 */
    }
  goto ret0;

 L7766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7767;
    }
  goto ret0;

 L7767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7768;
    }
  goto ret0;

 L7768: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2896 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)))
    {
      return 729;  /* *uminv16qi3 */
    }
  goto ret0;

 L7778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7779;
    }
  goto ret0;

 L7779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7780;
    }
  goto ret0;

 L7780: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2968 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands)))
    {
      return 731;  /* sse2_eqv16qi3 */
    }
  goto ret0;

 L7796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7797;
    }
  goto ret0;

 L7797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7798;
    }
  goto ret0;

 L7798: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2978 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 734;  /* sse2_gtv16qi3 */
    }
  goto ret0;

 L7814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode)
    goto L12359;
  goto ret0;

 L12359: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7839;
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7815;
    }
  goto ret0;

 L7839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[1] = x3;
      goto L7840;
    }
  goto ret0;

 L7840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7841;
    }
  goto ret0;

 L7841: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3058 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 741;  /* sse2_nandv16qi3 */
    }
  goto ret0;

 L7815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7816;
    }
  goto ret0;

 L7816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3048 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)))
    {
      return 737;  /* *andv16qi3 */
    }
  goto ret0;

 L7866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7867;
    }
  goto ret0;

 L7867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7868;
    }
  goto ret0;

 L7868: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3075 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)))
    {
      return 745;  /* *iorv16qi3 */
    }
  goto ret0;

 L7890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L7891;
    }
  goto ret0;

 L7891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L7892;
    }
  goto ret0;

 L7892: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3092 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)))
    {
      return 749;  /* *xorv16qi3 */
    }
  goto ret0;

 L7914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L12360;
  goto ret0;

 L12360: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L7915;
    case US_TRUNCATE:
      goto L7931;
    default:
     break;
   }
  goto ret0;

 L7915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7916;
    }
  goto ret0;

 L7916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7917;
  goto ret0;

 L7917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7918;
    }
  goto ret0;

 L7918: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3110 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 753;  /* sse2_packsswb */
    }
  goto ret0;

 L7931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7932;
    }
  goto ret0;

 L7932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L7933;
  goto ret0;

 L7933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7934;
    }
  goto ret0;

 L7934: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3134 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 755;  /* sse2_packuswb */
    }
  goto ret0;

 L7938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V32QImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L7939;
  goto ret0;

 L7939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[1] = x3;
      goto L7940;
    }
  goto ret0;

 L7940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V16QImode))
    {
      operands[2] = x3;
      goto L7941;
    }
  goto ret0;

 L7941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 16)
    goto L7942;
  goto ret0;

 L7942: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12362;
  goto ret0;

 L12362: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8L:
        goto L7943;
      case 0L:
        goto L7966;
      default:
        break;
      }
  goto ret0;

 L7943: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    goto L7944;
  goto ret0;

 L7944: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L7945;
  goto ret0;

 L7945: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (25)])
    goto L7946;
  goto ret0;

 L7946: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L7947;
  goto ret0;

 L7947: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (26)])
    goto L7948;
  goto ret0;

 L7948: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)])
    goto L7949;
  goto ret0;

 L7949: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (27)])
    goto L7950;
  goto ret0;

 L7950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 8);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L7951;
  goto ret0;

 L7951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 9);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (28)])
    goto L7952;
  goto ret0;

 L7952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 10);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L7953;
  goto ret0;

 L7953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 11);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (29)])
    goto L7954;
  goto ret0;

 L7954: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 12);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L7955;
  goto ret0;

 L7955: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 13);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (30)])
    goto L7956;
  goto ret0;

 L7956: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 14);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)])
    goto L7957;
  goto ret0;

 L7957: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 15);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (31)]
      && 
#line 3153 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 756;  /* sse2_punpckhbw */
    }
  goto ret0;

 L7966: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L7967;
  goto ret0;

 L7967: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7968;
  goto ret0;

 L7968: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (17)])
    goto L7969;
  goto ret0;

 L7969: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L7970;
  goto ret0;

 L7970: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (18)])
    goto L7971;
  goto ret0;

 L7971: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L7972;
  goto ret0;

 L7972: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (19)])
    goto L7973;
  goto ret0;

 L7973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 8);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L7974;
  goto ret0;

 L7974: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 9);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (20)])
    goto L7975;
  goto ret0;

 L7975: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 10);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L7976;
  goto ret0;

 L7976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 11);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (21)])
    goto L7977;
  goto ret0;

 L7977: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 12);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L7978;
  goto ret0;

 L7978: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 13);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (22)])
    goto L7979;
  goto ret0;

 L7979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 14);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L7980;
  goto ret0;

 L7980: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 15);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (23)]
      && 
#line 3172 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 757;  /* sse2_punpcklbw */
    }
  goto ret0;

 L8160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L8161;
  goto ret0;

 L8161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V16HImode
      && GET_CODE (x3) == PLUS)
    goto L8162;
  goto ret0;

 L8162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V16HImode
      && GET_CODE (x4) == PLUS)
    goto L8163;
  goto ret0;

 L8163: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V16HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8164;
  goto ret0;

 L8164: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V16QImode))
    {
      operands[1] = x6;
      goto L8165;
    }
  goto ret0;

 L8165: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V16HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8166;
  goto ret0;

 L8166: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V16QImode))
    {
      operands[2] = x6;
      goto L8167;
    }
  goto ret0;

 L8167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V16QImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 16)
    goto L8168;
  goto ret0;

 L8168: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8169;
  goto ret0;

 L8169: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8170;
  goto ret0;

 L8170: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8171;
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8172;
  goto ret0;

 L8172: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8173;
  goto ret0;

 L8173: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8174;
  goto ret0;

 L8174: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8175;
  goto ret0;

 L8175: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8176;
  goto ret0;

 L8176: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 8);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8177;
  goto ret0;

 L8177: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 9);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8178;
  goto ret0;

 L8178: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 10);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8179;
  goto ret0;

 L8179: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 11);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8180;
  goto ret0;

 L8180: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 12);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8181;
  goto ret0;

 L8181: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 13);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8182;
  goto ret0;

 L8182: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 14);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8183;
  goto ret0;

 L8183: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 15);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8184;
  goto ret0;

 L8184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3717 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
    {
      return 778;  /* sse2_uavgv16qi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7526;
    case SS_PLUS:
      goto L7550;
    case US_PLUS:
      goto L7562;
    case MINUS:
      goto L7574;
    case SS_MINUS:
      goto L7598;
    case US_MINUS:
      goto L7610;
    case MULT:
      goto L7616;
    case TRUNCATE:
      goto L7622;
    case ASHIFTRT:
      goto L7694;
    case LSHIFTRT:
      goto L7706;
    case ASHIFT:
      goto L7724;
    case SMAX:
      goto L7760;
    case SMIN:
      goto L7772;
    case EQ:
      goto L7784;
    case GT:
      goto L7802;
    case AND:
      goto L7820;
    case IOR:
      goto L7872;
    case XOR:
      goto L7896;
    case VEC_CONCAT:
      goto L7922;
    case VEC_SELECT:
      goto L7984;
    case VEC_MERGE:
      goto L8054;
    default:
     break;
   }
  goto ret0;

 L7526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7527;
    }
  goto ret0;

 L7527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7528;
    }
  goto ret0;

 L7528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
    {
      return 697;  /* *addv8hi3 */
    }
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7551;
    }
  goto ret0;

 L7551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7552;
    }
  goto ret0;

 L7552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2438 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)))
    {
      return 701;  /* sse2_ssaddv8hi3 */
    }
  goto ret0;

 L7562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7563;
    }
  goto ret0;

 L7563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7564;
    }
  goto ret0;

 L7564: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2448 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)))
    {
      return 703;  /* sse2_usaddv8hi3 */
    }
  goto ret0;

 L7574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7575;
    }
  goto ret0;

 L7575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7576;
    }
  goto ret0;

 L7576: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2465 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 705;  /* *subv8hi3 */
    }
  goto ret0;

 L7598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7599;
    }
  goto ret0;

 L7599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7600;
    }
  goto ret0;

 L7600: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 709;  /* sse2_sssubv8hi3 */
    }
  goto ret0;

 L7610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7611;
    }
  goto ret0;

 L7611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7612;
    }
  goto ret0;

 L7612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2485 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 711;  /* sse2_ussubv8hi3 */
    }
  goto ret0;

 L7616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7617;
    }
  goto ret0;

 L7617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7618;
    }
  goto ret0;

 L7618: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2545 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 712;  /* *mulv8hi3 */
    }
  goto ret0;

 L7622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L7623;
  goto ret0;

 L7623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8SImode)
    goto L12385;
  goto ret0;

 L12385: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L7624;
    case PLUS:
      goto L8190;
    default:
     break;
   }
  goto ret0;

 L7624: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8SImode)
    goto L12387;
  goto ret0;

 L12387: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L7625;
    case ZERO_EXTEND:
      goto L7635;
    default:
     break;
   }
  goto ret0;

 L7625: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7626;
    }
  goto ret0;

 L7626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L7627;
  goto ret0;

 L7627: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7628;
    }
  goto ret0;

 L7628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 2560 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 713;  /* sse2_smulv8hi3_highpart */
    }
  goto ret0;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7636;
    }
  goto ret0;

 L7636: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L7637;
  goto ret0;

 L7637: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7638;
    }
  goto ret0;

 L7638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 2575 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 714;  /* sse2_umulv8hi3_highpart */
    }
  goto ret0;

 L8190: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == PLUS)
    goto L8191;
  goto ret0;

 L8191: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V8SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8192;
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8HImode))
    {
      operands[1] = x6;
      goto L8193;
    }
  goto ret0;

 L8193: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V8SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8194;
  goto ret0;

 L8194: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8HImode))
    {
      operands[2] = x6;
      goto L8195;
    }
  goto ret0;

 L8195: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 8)
    goto L8196;
  goto ret0;

 L8196: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8197;
  goto ret0;

 L8197: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8198;
  goto ret0;

 L8198: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8199;
  goto ret0;

 L8199: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8200;
  goto ret0;

 L8200: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8201;
  goto ret0;

 L8201: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8202;
  goto ret0;

 L8202: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8203;
  goto ret0;

 L8203: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8204;
  goto ret0;

 L8204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3737 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
    {
      return 779;  /* sse2_uavgv8hi3 */
    }
  goto ret0;

 L7694: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7695;
    }
  goto ret0;

 L7695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7696;
    }
  goto ret0;

 L7696: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2727 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 717;  /* ashrv8hi3 */
    }
  goto ret0;

 L7706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7707;
    }
  goto ret0;

 L7707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7708;
    }
  goto ret0;

 L7708: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2737 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 719;  /* lshrv8hi3 */
    }
  goto ret0;

 L7724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7725;
    }
  goto ret0;

 L7725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7726;
    }
  goto ret0;

 L7726: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2747 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 722;  /* ashlv8hi3 */
    }
  goto ret0;

 L7760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7761;
    }
  goto ret0;

 L7761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7762;
    }
  goto ret0;

 L7762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2827 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)))
    {
      return 728;  /* *smaxv8hi3 */
    }
  goto ret0;

 L7772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7773;
    }
  goto ret0;

 L7773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7774;
    }
  goto ret0;

 L7774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2912 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)))
    {
      return 730;  /* *sminv8hi3 */
    }
  goto ret0;

 L7784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7785;
    }
  goto ret0;

 L7785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7786;
    }
  goto ret0;

 L7786: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2968 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands)))
    {
      return 732;  /* sse2_eqv8hi3 */
    }
  goto ret0;

 L7802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7803;
    }
  goto ret0;

 L7803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7804;
    }
  goto ret0;

 L7804: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2978 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 735;  /* sse2_gtv8hi3 */
    }
  goto ret0;

 L7820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode)
    goto L12390;
  goto ret0;

 L12390: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7846;
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7821;
    }
  goto ret0;

 L7846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7847;
    }
  goto ret0;

 L7847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7848;
    }
  goto ret0;

 L7848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3058 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 742;  /* sse2_nandv8hi3 */
    }
  goto ret0;

 L7821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7822;
    }
  goto ret0;

 L7822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3048 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)))
    {
      return 738;  /* *andv8hi3 */
    }
  goto ret0;

 L7872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7873;
    }
  goto ret0;

 L7873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7874;
    }
  goto ret0;

 L7874: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3075 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)))
    {
      return 746;  /* *iorv8hi3 */
    }
  goto ret0;

 L7896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L7897;
    }
  goto ret0;

 L7897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L7898;
    }
  goto ret0;

 L7898: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3092 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)))
    {
      return 750;  /* *xorv8hi3 */
    }
  goto ret0;

 L7922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7923;
  goto ret0;

 L7923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7924;
    }
  goto ret0;

 L7924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7925;
  goto ret0;

 L7925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L7926;
    }
  goto ret0;

 L7926: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3122 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 754;  /* sse2_packssdw */
    }
  goto ret0;

 L7984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V16HImode:
      goto L12391;
    case V8HImode:
      goto L12392;
    default:
      break;
    }
  goto ret0;

 L12391: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L7985;
  goto ret0;

 L7985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L7986;
    }
  goto ret0;

 L7986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L7987;
    }
  goto ret0;

 L7987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L7988;
  goto ret0;

 L7988: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12393;
  goto ret0;

 L12393: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L7989;
      case 0L:
        goto L8004;
      default:
        break;
      }
  goto ret0;

 L7989: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L7990;
  goto ret0;

 L7990: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L7991;
  goto ret0;

 L7991: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L7992;
  goto ret0;

 L7992: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L7993;
  goto ret0;

 L7993: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L7994;
  goto ret0;

 L7994: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L7995;
  goto ret0;

 L7995: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 3187 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 758;  /* sse2_punpckhwd */
    }
  goto ret0;

 L8004: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L8005;
  goto ret0;

 L8005: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8006;
  goto ret0;

 L8006: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L8007;
  goto ret0;

 L8007: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8008;
  goto ret0;

 L8008: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L8009;
  goto ret0;

 L8009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8010;
  goto ret0;

 L8010: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 3202 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 759;  /* sse2_punpcklwd */
    }
  goto ret0;

 L12392: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L8081;
    }
  goto ret0;

 L8081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L8082;
  goto ret0;

 L8082: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12395;
  goto ret0;

 L12395: ATTRIBUTE_UNUSED_LABEL
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8083;
    }
 L12396: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 0L)
    goto L8096;
  goto ret0;

 L8083: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L8084;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8084: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L8085;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8085: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L8086;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8086: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L8087;
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8087: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L8088;
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8088: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8089;
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8089: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 3362 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 767;  /* sse2_pshuflw_1 */
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L12396;

 L8096: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8097;
  goto ret0;

 L8097: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8098;
  goto ret0;

 L8098: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8099;
  goto ret0;

 L8099: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8100;
    }
  goto ret0;

 L8100: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L8101;
    }
  goto ret0;

 L8101: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L8102;
    }
  goto ret0;

 L8102: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L8103;
    }
  goto ret0;

 L8103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3403 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 768;  /* sse2_pshufhw_1 */
    }
  goto ret0;

 L8054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L8055;
  goto ret0;

 L8055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L8056;
    }
  goto ret0;

 L8056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L8057;
    }
  goto ret0;

 L8057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_pow2_1_to_128_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8058;
    }
  goto ret0;

 L8058: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3279 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 764;  /* *sse2_pinsrw */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12413;
    case FIX:
      goto L6920;
    case VEC_CONCAT:
      goto L7379;
    case PLUS:
      goto L7532;
    case MINUS:
      goto L7580;
    case ASHIFTRT:
      goto L7700;
    case LSHIFTRT:
      goto L7712;
    case ASHIFT:
      goto L7730;
    case EQ:
      goto L7790;
    case GT:
      goto L7808;
    case AND:
      goto L7826;
    case IOR:
      goto L7878;
    case XOR:
      goto L7902;
    case VEC_SELECT:
      goto L8014;
    case VEC_MERGE:
      goto L8107;
    case VEC_DUPLICATE:
      goto L8126;
    default:
     break;
   }
  goto ret0;

 L12413: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L6915;
  goto ret0;

 L6915: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6916;
    }
  goto ret0;

 L6916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1043 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 618;  /* sse2_cvtps2dq */
    }
  goto ret0;

 L6920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6921;
    }
  goto ret0;

 L6921: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1051 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 619;  /* sse2_cvttps2dq */
    }
  goto ret0;

 L7379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L12414;
  goto ret0;

 L12414: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L12417;
    case FIX:
      goto L7387;
    case REG:
    case SUBREG:
      goto L12416;
    default:
      goto ret0;
   }
 L12416: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8149;
    }
  goto ret0;

 L12417: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L7380;
  goto ret0;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7381;
    }
  goto ret0;

 L7381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7382;
    }
  goto ret0;

 L7382: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2015 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 677;  /* *sse2_cvtpd2dq */
    }
  goto ret0;

 L7387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7388;
    }
  goto ret0;

 L7388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7389;
    }
  goto ret0;

 L7389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2033 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 678;  /* *sse2_cvttpd2dq */
    }
  goto ret0;

 L8149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8150;
    }
  goto ret0;

 L8150: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3544 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 776;  /* *vec_concatv4si_1 */
    }
  goto ret0;

 L7532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L12419;
  goto ret0;

 L12419: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L7658;
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7533;
    }
  goto ret0;

 L7658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7659;
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7660;
  goto ret0;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L7661;
    }
  goto ret0;

 L7661: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7662;
  goto ret0;

 L7662: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7663;
  goto ret0;

 L7663: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L7664;
  goto ret0;

 L7664: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L7665;
  goto ret0;

 L7665: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L7666;
  goto ret0;

 L7666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7667;
  goto ret0;

 L7667: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7668;
  goto ret0;

 L7668: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L7669;
    }
  goto ret0;

 L7669: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7670;
  goto ret0;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7671;
  goto ret0;

 L7671: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L7672;
  goto ret0;

 L7672: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L7673;
  goto ret0;

 L7673: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L7674;
  goto ret0;

 L7674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == MULT)
    goto L7675;
  goto ret0;

 L7675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7676;
  goto ret0;

 L7676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7677;
  goto ret0;

 L7677: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L7678;
  goto ret0;

 L7678: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7679;
  goto ret0;

 L7679: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7680;
  goto ret0;

 L7680: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L7681;
  goto ret0;

 L7681: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L7682;
  goto ret0;

 L7682: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L7683;
  goto ret0;

 L7683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7684;
  goto ret0;

 L7684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L7685;
  goto ret0;

 L7685: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L7686;
  goto ret0;

 L7686: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L7687;
  goto ret0;

 L7687: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7688;
  goto ret0;

 L7688: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L7689;
  goto ret0;

 L7689: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L7690;
  goto ret0;

 L7690: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 2627 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 716;  /* sse2_pmaddwd */
    }
  goto ret0;

 L7533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7534;
    }
  goto ret0;

 L7534: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)))
    {
      return 698;  /* *addv4si3 */
    }
  goto ret0;

 L7580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7581;
    }
  goto ret0;

 L7581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7582;
    }
  goto ret0;

 L7582: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2465 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 706;  /* *subv4si3 */
    }
  goto ret0;

 L7700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7701;
    }
  goto ret0;

 L7701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7702;
    }
  goto ret0;

 L7702: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2727 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 718;  /* ashrv4si3 */
    }
  goto ret0;

 L7712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7713;
    }
  goto ret0;

 L7713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7714;
    }
  goto ret0;

 L7714: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2737 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 720;  /* lshrv4si3 */
    }
  goto ret0;

 L7730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7731;
    }
  goto ret0;

 L7731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7732;
    }
  goto ret0;

 L7732: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2747 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 723;  /* ashlv4si3 */
    }
  goto ret0;

 L7790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7791;
    }
  goto ret0;

 L7791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7792;
    }
  goto ret0;

 L7792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2968 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands)))
    {
      return 733;  /* sse2_eqv4si3 */
    }
  goto ret0;

 L7808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7809;
    }
  goto ret0;

 L7809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7810;
    }
  goto ret0;

 L7810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2978 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 736;  /* sse2_gtv4si3 */
    }
  goto ret0;

 L7826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L12421;
  goto ret0;

 L12421: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7853;
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7827;
    }
  goto ret0;

 L7853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7854;
    }
  goto ret0;

 L7854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7855;
    }
  goto ret0;

 L7855: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3058 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 743;  /* sse2_nandv4si3 */
    }
  goto ret0;

 L7827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7828;
    }
  goto ret0;

 L7828: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3048 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)))
    {
      return 739;  /* *andv4si3 */
    }
  goto ret0;

 L7878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7879;
    }
  goto ret0;

 L7879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7880;
    }
  goto ret0;

 L7880: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3075 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)))
    {
      return 747;  /* *iorv4si3 */
    }
  goto ret0;

 L7902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L7903;
    }
  goto ret0;

 L7903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L7904;
    }
  goto ret0;

 L7904: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3092 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)))
    {
      return 751;  /* *xorv4si3 */
    }
  goto ret0;

 L8014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V8SImode:
      goto L12422;
    case V4SImode:
      goto L12423;
    default:
      break;
    }
  goto ret0;

 L12422: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L8015;
  goto ret0;

 L8015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L8016;
    }
  goto ret0;

 L8016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L8017;
    }
  goto ret0;

 L8017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L8018;
  goto ret0;

 L8018: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12424;
  goto ret0;

 L12424: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L8019;
      case 0L:
        goto L8030;
      default:
        break;
      }
  goto ret0;

 L8019: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8020;
  goto ret0;

 L8020: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8021;
  goto ret0;

 L8021: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 3215 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 760;  /* sse2_punpckhdq */
    }
  goto ret0;

 L8030: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L8031;
  goto ret0;

 L8031: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8032;
  goto ret0;

 L8032: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 3228 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 761;  /* sse2_punpckldq */
    }
  goto ret0;

 L12423: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L8071;
    }
  goto ret0;

 L8071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L8072;
  goto ret0;

 L8072: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8073;
    }
  goto ret0;

 L8073: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L8074;
    }
  goto ret0;

 L8074: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L8075;
    }
  goto ret0;

 L8075: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L8076;
    }
  goto ret0;

 L8076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3321 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 766;  /* sse2_pshufd_1 */
    }
  goto ret0;

 L8107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L8108;
  goto ret0;

 L8108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8109;
    }
  goto ret0;

 L8109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L8110;
    }
  goto ret0;

 L8110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3434 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 769;  /* sse2_loadld */
    }
  goto ret0;

 L8126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8127;
    }
  goto ret0;

 L8127: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3490 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 772;  /* *vec_dupv4si */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6514;
    case VEC_MERGE:
      goto L6520;
    case MINUS:
      goto L6528;
    case MULT:
      goto L6542;
    case DIV:
      goto L6556;
    case UNSPEC:
      goto L12472;
    case SQRT:
      goto L6594;
    case SMAX:
      goto L6606;
    case SMIN:
      goto L6634;
    case VEC_CONCAT:
      goto L6696;
    case AND:
      goto L6814;
    case IOR:
      goto L6827;
    case XOR:
      goto L6833;
    case FLOAT:
      goto L6910;
    case VEC_SELECT:
      goto L6947;
    case VEC_DUPLICATE:
      goto L7042;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12465;
    default:
      goto ret0;
   }
 L12465: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V4SFmode))
    {
      operands[3] = x1;
      goto L6778;
    }
  goto ret0;

 L6514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6515;
    }
  goto ret0;

 L6515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6516;
    }
  goto ret0;

 L6516: ATTRIBUTE_UNUSED_LABEL
  if (
#line 316 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 570;  /* *addv4sf3 */
    }
  goto ret0;

 L6520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L12476;
  goto ret0;

 L12476: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6521;
    case MINUS:
      goto L6535;
    case MULT:
      goto L6549;
    case DIV:
      goto L6563;
    case UNSPEC:
      goto L12488;
    case SQRT:
      goto L6600;
    case SMAX:
      goto L6619;
    case SMIN:
      goto L6647;
    case VEC_DUPLICATE:
      goto L6865;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12485;
    case REG:
    case SUBREG:
      goto L12487;
    default:
      goto ret0;
   }
 L12485: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, V4SFmode))
    {
      operands[3] = x2;
      goto L6785;
    }
 L12487: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7037;
    }
  goto ret0;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SFmode)
    goto L12490;
  goto ret0;

 L12490: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6522;
    }
 L12491: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6688;
    }
  goto ret0;

 L6522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6523;
    }
  x3 = XEXP (x2, 0);
  goto L12491;

 L6523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6524;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12491;

 L6524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 571;  /* sse_vmaddv4sf3 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12491;

 L6688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6689;
    }
  goto ret0;

 L6689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == MINUS)
    goto L6690;
  goto ret0;

 L6690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6691;
  goto ret0;

 L6691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6692;
  goto ret0;

 L6692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 646 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 596;  /* sse3_addsubv4sf3 */
    }
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6536;
    }
  goto ret0;

 L6536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6537;
    }
  goto ret0;

 L6537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6538;
  goto ret0;

 L6538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 356 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 573;  /* sse_vmsubv4sf3 */
    }
  goto ret0;

 L6549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6550;
    }
  goto ret0;

 L6550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6551;
    }
  goto ret0;

 L6551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6552;
  goto ret0;

 L6552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 384 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)))
    {
      return 575;  /* sse_vmmulv4sf3 */
    }
  goto ret0;

 L6563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6564;
    }
  goto ret0;

 L6564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6565;
    }
  goto ret0;

 L6565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6566;
  goto ret0;

 L6566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 577;  /* sse_vmdivv4sf3 */
    }
  goto ret0;

 L12488: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L12492;
  goto ret0;

 L12492: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 35L:
      goto L6576;
    case 36L:
      goto L6588;
    default:
      break;
    }
  goto ret0;

 L6576: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6577;
    }
  goto ret0;

 L6577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6578;
    }
  goto ret0;

 L6578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 433 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 579;  /* sse_vmrcpv4sf2 */
    }
  goto ret0;

 L6588: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6589;
    }
  goto ret0;

 L6589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6590;
    }
  goto ret0;

 L6590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 454 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 581;  /* sse_vmrsqrtv4sf2 */
    }
  goto ret0;

 L6600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6601;
    }
  goto ret0;

 L6601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6602;
    }
  goto ret0;

 L6602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 473 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 583;  /* sse_vmsqrtv4sf2 */
    }
  goto ret0;

 L6619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SFmode)
    goto L12494;
  goto ret0;

 L12494: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6620;
    }
 L12495: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6628;
    }
  goto ret0;

 L6620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6621;
    }
  x3 = XEXP (x2, 0);
  goto L12495;

 L6621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6622;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12495;

 L6622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 519 "../../gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)))
    {
      return 586;  /* *sse_vmsmaxv4sf3_finite */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12495;

 L6628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6629;
    }
  goto ret0;

 L6629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6630;
  goto ret0;

 L6630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 532 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 587;  /* sse_vmsmaxv4sf3 */
    }
  goto ret0;

 L6647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SFmode)
    goto L12496;
  goto ret0;

 L12496: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6648;
    }
 L12497: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6656;
    }
  goto ret0;

 L6648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6649;
    }
  x3 = XEXP (x2, 0);
  goto L12497;

 L6649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6650;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12497;

 L6650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)))
    {
      return 590;  /* *sse_vmsminv4sf3_finite */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12497;

 L6656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6657;
    }
  goto ret0;

 L6657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6658;
  goto ret0;

 L6658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 587 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 591;  /* sse_vmsminv4sf3 */
    }
  goto ret0;

 L6865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case V2SFmode:
      goto L12498;
    case SFmode:
      goto L12499;
    default:
      break;
    }
  goto ret0;

 L12498: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case FLOAT:
      goto L6866;
    case FLOAT_TRUNCATE:
      goto L7395;
    default:
     break;
   }
  goto ret0;

 L6866: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L6867;
    }
  goto ret0;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6868;
    }
  goto ret0;

 L6868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 927 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 611;  /* sse_cvtpi2ps */
    }
  goto ret0;

 L7395: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L7396;
    }
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7397;
    }
  goto ret0;

 L7397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2046 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 679;  /* sse2_cvtsd2ss */
    }
  goto ret0;

 L12499: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L6890;
  goto ret0;

 L6890: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6891;
    }
  goto ret0;

 L6891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6892;
    }
  goto ret0;

 L6892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 962 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 614;  /* sse_cvtsi2ss */
    }
  goto ret0;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6786;
    }
  goto ret0;

 L6786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6787;
    }
  goto ret0;

 L6787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L6788;
  goto ret0;

 L6788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 600;  /* sse_vmmaskcmpv4sf3 */
    }
  goto ret0;

 L7037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7038;
    }
  goto ret0;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1258 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 631;  /* sse_movss */
    }
  goto ret0;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6529;
    }
  goto ret0;

 L6529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6530;
    }
  goto ret0;

 L6530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 344 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 572;  /* *subv4sf3 */
    }
  goto ret0;

 L6542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6543;
    }
  goto ret0;

 L6543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6544;
    }
  goto ret0;

 L6544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 372 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)))
    {
      return 574;  /* *mulv4sf3 */
    }
  goto ret0;

 L6556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6557;
    }
  goto ret0;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6558;
    }
  goto ret0;

 L6558: ATTRIBUTE_UNUSED_LABEL
  if (
#line 400 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 576;  /* *divv4sf3 */
    }
  goto ret0;

 L12472: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L12501;
    case 2:
      goto L12503;
    default:
      break;
    }
  goto ret0;

 L12501: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 35L:
      goto L6570;
    case 36L:
      goto L6582;
    default:
      break;
    }
  goto ret0;

 L6570: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6571;
    }
  goto ret0;

 L6571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 421 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 578;  /* sse_rcpv4sf2 */
    }
  goto ret0;

 L6582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6583;
    }
  goto ret0;

 L6583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 442 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 580;  /* sse_rsqrtv4sf2 */
    }
  goto ret0;

 L12503: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51L:
      goto L6662;
    case 52L:
      goto L6668;
    default:
      break;
    }
  goto ret0;

 L6662: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6663;
    }
  goto ret0;

 L6663: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6664;
    }
  goto ret0;

 L6664: ATTRIBUTE_UNUSED_LABEL
  if (
#line 603 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 592;  /* *ieee_sminv4sf3 */
    }
  goto ret0;

 L6668: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6669;
    }
  goto ret0;

 L6669: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6670;
    }
  goto ret0;

 L6670: ATTRIBUTE_UNUSED_LABEL
  if (
#line 613 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 593;  /* *ieee_smaxv4sf3 */
    }
  goto ret0;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6595;
    }
  goto ret0;

 L6595: ATTRIBUTE_UNUSED_LABEL
  if (
#line 462 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 582;  /* sqrtv4sf2 */
    }
  goto ret0;

 L6606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L12505;
  goto ret0;

 L12505: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6607;
    }
 L12506: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6613;
    }
  goto ret0;

 L6607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6608;
    }
  x2 = XEXP (x1, 0);
  goto L12506;

 L6608: ATTRIBUTE_UNUSED_LABEL
  if (
#line 497 "../../gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)))
    {
      return 584;  /* *smaxv4sf3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12506;

 L6613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6614;
    }
  goto ret0;

 L6614: ATTRIBUTE_UNUSED_LABEL
  if (
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 585;  /* *smaxv4sf3 */
    }
  goto ret0;

 L6634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L12507;
  goto ret0;

 L12507: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6635;
    }
 L12508: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6641;
    }
  goto ret0;

 L6635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6636;
    }
  x2 = XEXP (x1, 0);
  goto L12508;

 L6636: ATTRIBUTE_UNUSED_LABEL
  if (
#line 552 "../../gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)))
    {
      return 588;  /* *sminv4sf3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12508;

 L6641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6642;
    }
  goto ret0;

 L6642: ATTRIBUTE_UNUSED_LABEL
  if (
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 589;  /* *sminv4sf3 */
    }
  goto ret0;

 L6696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L12509;
  goto ret0;

 L12509: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_CONCAT:
      goto L6697;
    case FLOAT_TRUNCATE:
      goto L7413;
    case REG:
    case SUBREG:
      goto L12510;
    default:
      goto ret0;
   }
 L12510: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L7054;
    }
  goto ret0;

 L6697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L12512;
  goto ret0;

 L12512: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L6698;
    case MINUS:
      goto L6739;
    default:
     break;
   }
  goto ret0;

 L6698: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6699;
  goto ret0;

 L6699: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4SFmode))
    {
      operands[1] = x5;
      goto L6700;
    }
  goto ret0;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6701;
  goto ret0;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6702;
  goto ret0;

 L6702: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6703;
  goto ret0;

 L6703: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6704;
  goto ret0;

 L6704: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6705;
  goto ret0;

 L6705: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6706;
  goto ret0;

 L6706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L6707;
  goto ret0;

 L6707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6708;
  goto ret0;

 L6708: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6709;
  goto ret0;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6710;
  goto ret0;

 L6710: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6711;
  goto ret0;

 L6711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6712;
  goto ret0;

 L6712: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6713;
  goto ret0;

 L6713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6714;
  goto ret0;

 L6714: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L6715;
  goto ret0;

 L6715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L6716;
  goto ret0;

 L6716: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L6717;
  goto ret0;

 L6717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6718;
  goto ret0;

 L6718: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4SFmode))
    {
      operands[2] = x5;
      goto L6719;
    }
  goto ret0;

 L6719: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6720;
  goto ret0;

 L6720: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6721;
  goto ret0;

 L6721: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6722;
  goto ret0;

 L6722: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6723;
  goto ret0;

 L6723: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6724;
  goto ret0;

 L6724: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6725;
  goto ret0;

 L6725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L6726;
  goto ret0;

 L6726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6727;
  goto ret0;

 L6727: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6728;
  goto ret0;

 L6728: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6729;
  goto ret0;

 L6729: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6730;
  goto ret0;

 L6730: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6731;
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6732;
  goto ret0;

 L6732: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6733;
  goto ret0;

 L6733: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 672 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 597;  /* sse3_haddv4sf3 */
    }
  goto ret0;

 L6739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6740;
  goto ret0;

 L6740: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4SFmode))
    {
      operands[1] = x5;
      goto L6741;
    }
  goto ret0;

 L6741: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6742;
  goto ret0;

 L6742: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6743;
  goto ret0;

 L6743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6744;
  goto ret0;

 L6744: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6745;
  goto ret0;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6746;
  goto ret0;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6747;
  goto ret0;

 L6747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L6748;
  goto ret0;

 L6748: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6749;
  goto ret0;

 L6749: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6750;
  goto ret0;

 L6750: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6751;
  goto ret0;

 L6751: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6752;
  goto ret0;

 L6752: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6753;
  goto ret0;

 L6753: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6754;
  goto ret0;

 L6754: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6755;
  goto ret0;

 L6755: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L6756;
  goto ret0;

 L6756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L6757;
  goto ret0;

 L6757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L6758;
  goto ret0;

 L6758: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6759;
  goto ret0;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4SFmode))
    {
      operands[2] = x5;
      goto L6760;
    }
  goto ret0;

 L6760: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6761;
  goto ret0;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6762;
  goto ret0;

 L6762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6763;
  goto ret0;

 L6763: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6764;
  goto ret0;

 L6764: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6765;
  goto ret0;

 L6765: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6766;
  goto ret0;

 L6766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L6767;
  goto ret0;

 L6767: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6768;
  goto ret0;

 L6768: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6769;
  goto ret0;

 L6769: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6770;
  goto ret0;

 L6770: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6771;
  goto ret0;

 L6771: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L6772;
  goto ret0;

 L6772: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6773;
  goto ret0;

 L6773: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L6774;
  goto ret0;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 698 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 598;  /* sse3_hsubv4sf3 */
    }
  goto ret0;

 L7413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7414;
    }
  goto ret0;

 L7414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7415;
    }
  goto ret0;

 L7415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2081 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 681;  /* *sse2_cvtpd2ps */
    }
  goto ret0;

 L7054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7055;
    }
  goto ret0;

 L7055: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1294 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 634;  /* *sse_concatv4sf */
    }
  goto ret0;

 L6814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L12515;
  goto ret0;

 L12515: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6821;
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6815;
    }
  goto ret0;

 L6821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6822;
    }
  goto ret0;

 L6822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6823;
    }
  goto ret0;

 L6823: ATTRIBUTE_UNUSED_LABEL
  if (
#line 836 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 604;  /* sse_nandv4sf3 */
    }
  goto ret0;

 L6815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6816;
    }
  goto ret0;

 L6816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 827 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)))
    {
      return 603;  /* *andv4sf3 */
    }
  goto ret0;

 L6827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6828;
    }
  goto ret0;

 L6828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6829;
    }
  goto ret0;

 L6829: ATTRIBUTE_UNUSED_LABEL
  if (
#line 852 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)))
    {
      return 605;  /* *iorv4sf3 */
    }
  goto ret0;

 L6833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6834;
    }
  goto ret0;

 L6834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6835;
    }
  goto ret0;

 L6835: ATTRIBUTE_UNUSED_LABEL
  if (
#line 868 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)))
    {
      return 606;  /* *xorv4sf3 */
    }
  goto ret0;

 L6910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L6911;
    }
  goto ret0;

 L6911: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1034 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 617;  /* sse2_cvtdq2ps */
    }
  goto ret0;

 L6947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L6948;
  goto ret0;

 L6948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SFmode)
    goto L12516;
  goto ret0;

 L12516: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6949;
    }
 L12517: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6971;
    }
 L12518: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6993;
    }
  goto ret0;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6950;
    }
  x3 = XEXP (x2, 0);
  goto L12517;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L6951;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12519;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L12519: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L6952;
      case 0L:
        goto L6963;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L6953;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L6954;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6954: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 1106 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 622;  /* sse_unpckhps */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L6964;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6964: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6965;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6965: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 1119 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 623;  /* sse_unpcklps */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12517;

 L6971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6972;
  x3 = XEXP (x2, 0);
  goto L12518;

 L6972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L6973;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12521;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L12521: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L6974;
      case 0L:
        goto L6985;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6975;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6975: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L6976;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 1136 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 624;  /* sse3_movshdup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6985: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6986;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L6987;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)]
      && 
#line 1151 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 625;  /* sse3_movsldup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12518;

 L6993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6994;
    }
  goto ret0;

 L6994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L6995;
  goto ret0;

 L6995: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L6996;
    }
  goto ret0;

 L6996: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L6997;
    }
  goto ret0;

 L6997: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L6998;
    }
  goto ret0;

 L6998: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[6] = x3;
      goto L6999;
    }
  goto ret0;

 L6999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1182 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 626;  /* sse_shufps_1 */
    }
  goto ret0;

 L7042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7043;
    }
  goto ret0;

 L7043: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1267 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 632;  /* *vec_dupv4sf */
    }
  goto ret0;

 L6778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6779;
    }
  goto ret0;

 L6779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L6780;
    }
  goto ret0;

 L6780: ATTRIBUTE_UNUSED_LABEL
  if (
#line 748 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 599;  /* sse_maskcmpv4sf3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12549;
    case PLUS:
      goto L7072;
    case VEC_MERGE:
      goto L7078;
    case MINUS:
      goto L7086;
    case MULT:
      goto L7100;
    case DIV:
      goto L7114;
    case SQRT:
      goto L7128;
    case SMAX:
      goto L7140;
    case SMIN:
      goto L7168;
    case VEC_CONCAT:
      goto L7206;
    case AND:
      goto L7284;
    case IOR:
      goto L7297;
    case XOR:
      goto L7303;
    case FLOAT:
      goto L7334;
    case FLOAT_EXTEND:
      goto L7419;
    case VEC_SELECT:
      goto L7454;
    case VEC_DUPLICATE:
      goto L7499;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12541;
    default:
      goto ret0;
   }
 L12541: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V2DFmode))
    {
      operands[3] = x1;
      goto L7248;
    }
  goto ret0;

 L12549: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L12551;
  goto ret0;

 L12551: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51L:
      goto L6674;
    case 52L:
      goto L6680;
    default:
      break;
    }
  goto ret0;

 L6674: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L6675;
    }
  goto ret0;

 L6675: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L6676;
    }
  goto ret0;

 L6676: ATTRIBUTE_UNUSED_LABEL
  if (
#line 623 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 594;  /* *ieee_sminv2df3 */
    }
  goto ret0;

 L6680: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L6681;
    }
  goto ret0;

 L6681: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L6682;
    }
  goto ret0;

 L6682: ATTRIBUTE_UNUSED_LABEL
  if (
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 595;  /* *ieee_smaxv2df3 */
    }
  goto ret0;

 L7072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7073;
    }
  goto ret0;

 L7073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7074;
    }
  goto ret0;

 L7074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1410 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands)))
    {
      return 637;  /* *addv2df3 */
    }
  goto ret0;

 L7078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L12553;
  goto ret0;

 L12553: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7079;
    case MINUS:
      goto L7093;
    case MULT:
      goto L7107;
    case DIV:
      goto L7121;
    case SQRT:
      goto L7134;
    case SMAX:
      goto L7153;
    case SMIN:
      goto L7181;
    case VEC_DUPLICATE:
      goto L7350;
    case FLOAT_EXTEND:
      goto L7402;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L12560;
    default:
      goto ret0;
   }
 L12560: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, V2DFmode))
    {
      operands[3] = x2;
      goto L7255;
    }
  goto ret0;

 L7079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2DFmode)
    goto L12563;
  goto ret0;

 L12563: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7080;
    }
 L12564: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7198;
    }
  goto ret0;

 L7080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7081;
    }
  x3 = XEXP (x2, 0);
  goto L12564;

 L7081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7082;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12564;

 L7082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1422 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 638;  /* sse2_vmaddv2df3 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12564;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7199;
    }
  goto ret0;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DFmode
      && GET_CODE (x2) == MINUS)
    goto L7200;
  goto ret0;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7201;
  goto ret0;

 L7201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7202;
  goto ret0;

 L7202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1652 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 655;  /* sse3_addsubv2df3 */
    }
  goto ret0;

 L7093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7094;
    }
  goto ret0;

 L7094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7095;
    }
  goto ret0;

 L7095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7096;
  goto ret0;

 L7096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1450 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 640;  /* sse2_vmsubv2df3 */
    }
  goto ret0;

 L7107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7108;
    }
  goto ret0;

 L7108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7109;
    }
  goto ret0;

 L7109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7110;
  goto ret0;

 L7110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1478 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)))
    {
      return 642;  /* sse2_vmmulv2df3 */
    }
  goto ret0;

 L7121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7122;
    }
  goto ret0;

 L7122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7123;
    }
  goto ret0;

 L7123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7124;
  goto ret0;

 L7124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1506 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 644;  /* sse2_vmdivv2df3 */
    }
  goto ret0;

 L7134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7135;
    }
  goto ret0;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7136;
    }
  goto ret0;

 L7136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1525 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 646;  /* sse2_vmsqrtv2df2 */
    }
  goto ret0;

 L7153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2DFmode)
    goto L12565;
  goto ret0;

 L12565: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7154;
    }
 L12566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7162;
    }
  goto ret0;

 L7154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7155;
    }
  x3 = XEXP (x2, 0);
  goto L12566;

 L7155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7156;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12566;

 L7156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1571 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)))
    {
      return 649;  /* *sse2_vmsmaxv2df3_finite */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12566;

 L7162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7163;
    }
  goto ret0;

 L7163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7164;
  goto ret0;

 L7164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1584 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 650;  /* sse2_vmsmaxv2df3 */
    }
  goto ret0;

 L7181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2DFmode)
    goto L12567;
  goto ret0;

 L12567: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7182;
    }
 L12568: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7190;
    }
  goto ret0;

 L7182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7183;
    }
  x3 = XEXP (x2, 0);
  goto L12568;

 L7183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7184;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12568;

 L7184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1626 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)))
    {
      return 653;  /* *sse2_vmsminv2df3_finite */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12568;

 L7190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7191;
    }
  goto ret0;

 L7191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7192;
  goto ret0;

 L7192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1639 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 654;  /* sse2_vmsminv2df3 */
    }
  goto ret0;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == FLOAT)
    goto L7351;
  goto ret0;

 L7351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7352;
    }
  goto ret0;

 L7352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7353;
    }
  goto ret0;

 L7353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1920 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 673;  /* sse2_cvtsi2sd */
    }
  goto ret0;

 L7402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7403;
  goto ret0;

 L7403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SFmode))
    {
      operands[2] = x4;
      goto L7404;
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7405;
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7406;
  goto ret0;

 L7406: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7407;
  goto ret0;

 L7407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7408;
    }
  goto ret0;

 L7408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2061 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 680;  /* sse2_cvtss2sd */
    }
  goto ret0;

 L7255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7256;
    }
  goto ret0;

 L7256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7257;
    }
  goto ret0;

 L7257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7258;
  goto ret0;

 L7258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1726 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 659;  /* sse2_vmmaskcmpv2df3 */
    }
  goto ret0;

 L7086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7087;
    }
  goto ret0;

 L7087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7088;
    }
  goto ret0;

 L7088: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1438 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 639;  /* *subv2df3 */
    }
  goto ret0;

 L7100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7101;
    }
  goto ret0;

 L7101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7102;
    }
  goto ret0;

 L7102: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1466 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)))
    {
      return 641;  /* *mulv2df3 */
    }
  goto ret0;

 L7114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7115;
    }
  goto ret0;

 L7115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7116;
    }
  goto ret0;

 L7116: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1494 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 643;  /* *divv2df3 */
    }
  goto ret0;

 L7128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7129;
    }
  goto ret0;

 L7129: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1514 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 645;  /* sqrtv2df2 */
    }
  goto ret0;

 L7140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L12569;
  goto ret0;

 L12569: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7141;
    }
 L12570: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7147;
    }
  goto ret0;

 L7141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7142;
    }
  x2 = XEXP (x1, 0);
  goto L12570;

 L7142: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1549 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)))
    {
      return 647;  /* *smaxv2df3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12570;

 L7147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7148;
    }
  goto ret0;

 L7148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 648;  /* *smaxv2df3 */
    }
  goto ret0;

 L7168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L12571;
  goto ret0;

 L12571: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7169;
    }
 L12572: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7175;
    }
  goto ret0;

 L7169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7170;
    }
  x2 = XEXP (x1, 0);
  goto L12572;

 L7170: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1604 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)))
    {
      return 651;  /* *sminv2df3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12572;

 L7175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7176;
    }
  goto ret0;

 L7176: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1614 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 652;  /* *sminv2df3 */
    }
  goto ret0;

 L7206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12573;
  goto ret0;

 L12573: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7207;
    case MINUS:
      goto L7228;
    case REG:
    case SUBREG:
    case MEM:
      goto L12575;
    default:
      goto ret0;
   }
 L12575: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7510;
    }
  goto ret0;

 L7207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7208;
  goto ret0;

 L7208: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[1] = x4;
      goto L7209;
    }
  goto ret0;

 L7209: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7210;
  goto ret0;

 L7210: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7211;
  goto ret0;

 L7211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7212;
  goto ret0;

 L7212: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7213;
  goto ret0;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7214;
  goto ret0;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7215;
  goto ret0;

 L7215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == PLUS)
    goto L7216;
  goto ret0;

 L7216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7217;
  goto ret0;

 L7217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L7218;
    }
  goto ret0;

 L7218: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7219;
  goto ret0;

 L7219: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7220;
  goto ret0;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7221;
  goto ret0;

 L7221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L7222;
  goto ret0;

 L7222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7223;
  goto ret0;

 L7223: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1670 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 656;  /* sse3_haddv2df3 */
    }
  goto ret0;

 L7228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7229;
  goto ret0;

 L7229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[1] = x4;
      goto L7230;
    }
  goto ret0;

 L7230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7231;
  goto ret0;

 L7231: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7232;
  goto ret0;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7233;
  goto ret0;

 L7233: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7234;
  goto ret0;

 L7234: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7235;
  goto ret0;

 L7235: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7236;
  goto ret0;

 L7236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == MINUS)
    goto L7237;
  goto ret0;

 L7237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7238;
  goto ret0;

 L7238: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L7239;
    }
  goto ret0;

 L7239: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7240;
  goto ret0;

 L7240: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7241;
  goto ret0;

 L7241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7242;
  goto ret0;

 L7242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L7243;
  goto ret0;

 L7243: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L7244;
  goto ret0;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1688 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 657;  /* sse3_hsubv2df3 */
    }
  goto ret0;

 L7510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && 
#line 2351 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 694;  /* *vec_concatv2df_sse3 */
    }
 L7515: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7516;
    }
  goto ret0;

 L7516: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2361 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 695;  /* *vec_concatv2df */
    }
  goto ret0;

 L7284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L12577;
  goto ret0;

 L12577: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7291;
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7285;
    }
  goto ret0;

 L7291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7292;
    }
  goto ret0;

 L7292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7293;
    }
  goto ret0;

 L7293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1801 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 663;  /* sse2_nandv2df3 */
    }
  goto ret0;

 L7285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7286;
    }
  goto ret0;

 L7286: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1792 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands)))
    {
      return 662;  /* *andv2df3 */
    }
  goto ret0;

 L7297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7298;
    }
  goto ret0;

 L7298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7299;
    }
  goto ret0;

 L7299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1817 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands)))
    {
      return 664;  /* *iorv2df3 */
    }
  goto ret0;

 L7303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7304;
    }
  goto ret0;

 L7304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7305;
    }
  goto ret0;

 L7305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1833 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands)))
    {
      return 665;  /* *xorv2df3 */
    }
  goto ret0;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L12579;
  goto ret0;

 L12579: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7372;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7335;
    }
  goto ret0;

 L7372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L7373;
    }
  goto ret0;

 L7373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7374;
  goto ret0;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7375;
  goto ret0;

 L7375: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1995 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 676;  /* sse2_cvtdq2pd */
    }
  goto ret0;

 L7335: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 670;  /* sse2_cvtpi2pd */
    }
  goto ret0;

 L7419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7420;
  goto ret0;

 L7420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7421;
    }
  goto ret0;

 L7421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7422;
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7423;
  goto ret0;

 L7423: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2092 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 682;  /* sse2_cvtps2pd */
    }
  goto ret0;

 L7454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L7455;
  goto ret0;

 L7455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7456;
    }
  goto ret0;

 L7456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7457;
    }
  goto ret0;

 L7457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7458;
  goto ret0;

 L7458: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_1_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L7459;
    }
  goto ret0;

 L7459: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_2_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L7460;
    }
  goto ret0;

 L7460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2189 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 686;  /* sse2_shufpd_1 */
    }
  goto ret0;

 L7499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12580;
  goto ret0;

 L12580: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7500;
    }
 L12581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7505;
    }
  goto ret0;

 L7500: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2332 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 692;  /* *vec_dupv2df_sse3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L12581;

 L7505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2341 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 693;  /* *vec_dupv2df */
    }
  goto ret0;

 L7248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7249;
    }
  goto ret0;

 L7249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7250;
    }
  goto ret0;

 L7250: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1713 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 658;  /* sse2_maskcmpv2df3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8471;
    case SS_PLUS:
      goto L8496;
    case US_PLUS:
      goto L8508;
    case MINUS:
      goto L8520;
    case SS_MINUS:
      goto L8545;
    case US_MINUS:
      goto L8557;
    case UMAX:
      goto L8653;
    case UMIN:
      goto L8665;
    case EQ:
      goto L8727;
    case GT:
      goto L8745;
    case AND:
      goto L8763;
    case IOR:
      goto L8802;
    case XOR:
      goto L8820;
    case VEC_CONCAT:
      goto L8838;
    case VEC_SELECT:
      goto L8862;
    case TRUNCATE:
      goto L8994;
    default:
     break;
   }
  goto ret0;

 L8471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8472;
    }
  goto ret0;

 L8472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8473;
    }
  goto ret0;

 L8473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
    {
      return 823;  /* mmx_addv8qi3 */
    }
  goto ret0;

 L8496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8497;
    }
  goto ret0;

 L8497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8498;
    }
  goto ret0;

 L8498: ATTRIBUTE_UNUSED_LABEL
  if (
#line 586 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 827;  /* mmx_ssaddv8qi3 */
    }
  goto ret0;

 L8508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8509;
    }
  goto ret0;

 L8509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8510;
    }
  goto ret0;

 L8510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 829;  /* mmx_usaddv8qi3 */
    }
  goto ret0;

 L8520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8521;
    }
  goto ret0;

 L8521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8522;
    }
  goto ret0;

 L8522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 831;  /* mmx_subv8qi3 */
    }
  goto ret0;

 L8545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8546;
    }
  goto ret0;

 L8546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8547;
    }
  goto ret0;

 L8547: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 835;  /* mmx_sssubv8qi3 */
    }
  goto ret0;

 L8557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8558;
    }
  goto ret0;

 L8558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8559;
    }
  goto ret0;

 L8559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 637 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 837;  /* mmx_ussubv8qi3 */
    }
  goto ret0;

 L8653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8654;
    }
  goto ret0;

 L8654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8655;
    }
  goto ret0;

 L8655: ATTRIBUTE_UNUSED_LABEL
  if (
#line 742 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)))
    {
      return 845;  /* mmx_umaxv8qi3 */
    }
  goto ret0;

 L8665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8666;
    }
  goto ret0;

 L8666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8667;
    }
  goto ret0;

 L8667: ATTRIBUTE_UNUSED_LABEL
  if (
#line 762 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)))
    {
      return 847;  /* mmx_uminv8qi3 */
    }
  goto ret0;

 L8727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8728;
    }
  goto ret0;

 L8728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8729;
    }
  goto ret0;

 L8729: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)))
    {
      return 857;  /* mmx_eqv8qi3 */
    }
  goto ret0;

 L8745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8746;
    }
  goto ret0;

 L8746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8747;
    }
  goto ret0;

 L8747: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 860;  /* mmx_gtv8qi3 */
    }
  goto ret0;

 L8763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L12657;
  goto ret0;

 L12657: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L8782;
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8764;
    }
  goto ret0;

 L8782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8783;
    }
  goto ret0;

 L8783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8784;
    }
  goto ret0;

 L8784: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 866;  /* mmx_nandv8qi3 */
    }
  goto ret0;

 L8764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8765;
    }
  goto ret0;

 L8765: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)))
    {
      return 863;  /* mmx_andv8qi3 */
    }
  goto ret0;

 L8802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8803;
    }
  goto ret0;

 L8803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8804;
    }
  goto ret0;

 L8804: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)))
    {
      return 869;  /* mmx_iorv8qi3 */
    }
  goto ret0;

 L8820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8821;
    }
  goto ret0;

 L8821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8822;
    }
  goto ret0;

 L8822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)))
    {
      return 872;  /* mmx_xorv8qi3 */
    }
  goto ret0;

 L8838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L12658;
  goto ret0;

 L12658: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L8839;
    case US_TRUNCATE:
      goto L8855;
    default:
     break;
   }
  goto ret0;

 L8839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8840;
    }
  goto ret0;

 L8840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8841;
  goto ret0;

 L8841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8842;
    }
  goto ret0;

 L8842: ATTRIBUTE_UNUSED_LABEL
  if (
#line 916 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 875;  /* mmx_packsswb */
    }
  goto ret0;

 L8855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8856;
    }
  goto ret0;

 L8856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L8857;
  goto ret0;

 L8857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8858;
    }
  goto ret0;

 L8858: ATTRIBUTE_UNUSED_LABEL
  if (
#line 940 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 877;  /* mmx_packuswb */
    }
  goto ret0;

 L8862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L8863;
  goto ret0;

 L8863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8864;
    }
  goto ret0;

 L8864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8865;
    }
  goto ret0;

 L8865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L8866;
  goto ret0;

 L8866: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12660;
  goto ret0;

 L12660: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4L:
        goto L8867;
      case 0L:
        goto L8882;
      default:
        break;
      }
  goto ret0;

 L8867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L8868;
  goto ret0;

 L8868: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L8869;
  goto ret0;

 L8869: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L8870;
  goto ret0;

 L8870: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8871;
  goto ret0;

 L8871: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L8872;
  goto ret0;

 L8872: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L8873;
  goto ret0;

 L8873: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 955 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 878;  /* mmx_punpckhbw */
    }
  goto ret0;

 L8882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L8883;
  goto ret0;

 L8883: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8884;
  goto ret0;

 L8884: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L8885;
  goto ret0;

 L8885: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8886;
  goto ret0;

 L8886: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L8887;
  goto ret0;

 L8887: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8888;
  goto ret0;

 L8888: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 970 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 879;  /* mmx_punpcklbw */
    }
  goto ret0;

 L8994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L8995;
  goto ret0;

 L8995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8HImode
      && GET_CODE (x3) == PLUS)
    goto L8996;
  goto ret0;

 L8996: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == PLUS)
    goto L8997;
  goto ret0;

 L8997: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V8HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8998;
  goto ret0;

 L8998: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8QImode))
    {
      operands[1] = x6;
      goto L8999;
    }
  goto ret0;

 L8999: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V8HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L9000;
  goto ret0;

 L9000: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8QImode))
    {
      operands[2] = x6;
      goto L9001;
    }
  goto ret0;

 L9001: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 8)
    goto L9002;
  goto ret0;

 L9002: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9003;
  goto ret0;

 L9003: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9004;
  goto ret0;

 L9004: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9005;
  goto ret0;

 L9005: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9006;
  goto ret0;

 L9006: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9007;
  goto ret0;

 L9007: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9008;
  goto ret0;

 L9008: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9009;
  goto ret0;

 L9009: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9010;
  goto ret0;

 L9010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1305 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
    {
      return 893;  /* mmx_uavgv8qi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8477;
    case SS_PLUS:
      goto L8502;
    case US_PLUS:
      goto L8514;
    case MINUS:
      goto L8526;
    case SS_MINUS:
      goto L8551;
    case US_MINUS:
      goto L8563;
    case MULT:
      goto L8569;
    case TRUNCATE:
      goto L8575;
    case SMAX:
      goto L8659;
    case SMIN:
      goto L8671;
    case ASHIFTRT:
      goto L8677;
    case LSHIFTRT:
      goto L8689;
    case ASHIFT:
      goto L8708;
    case EQ:
      goto L8733;
    case GT:
      goto L8751;
    case AND:
      goto L8769;
    case IOR:
      goto L8808;
    case XOR:
      goto L8826;
    case VEC_CONCAT:
      goto L8846;
    case VEC_SELECT:
      goto L8892;
    case VEC_MERGE:
      goto L8932;
    case VEC_DUPLICATE:
      goto L8965;
    default:
     break;
   }
  goto ret0;

 L8477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8478;
    }
  goto ret0;

 L8478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8479;
    }
  goto ret0;

 L8479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
    {
      return 824;  /* mmx_addv4hi3 */
    }
  goto ret0;

 L8502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8503;
    }
  goto ret0;

 L8503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8504;
    }
  goto ret0;

 L8504: ATTRIBUTE_UNUSED_LABEL
  if (
#line 586 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 828;  /* mmx_ssaddv4hi3 */
    }
  goto ret0;

 L8514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8515;
    }
  goto ret0;

 L8515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8516;
    }
  goto ret0;

 L8516: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 830;  /* mmx_usaddv4hi3 */
    }
  goto ret0;

 L8526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8527;
    }
  goto ret0;

 L8527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8528;
    }
  goto ret0;

 L8528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 832;  /* mmx_subv4hi3 */
    }
  goto ret0;

 L8551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8552;
    }
  goto ret0;

 L8552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8553;
    }
  goto ret0;

 L8553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 836;  /* mmx_sssubv4hi3 */
    }
  goto ret0;

 L8563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8564;
    }
  goto ret0;

 L8564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8565;
    }
  goto ret0;

 L8565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 637 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 838;  /* mmx_ussubv4hi3 */
    }
  goto ret0;

 L8569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8570;
    }
  goto ret0;

 L8570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8571;
    }
  goto ret0;

 L8571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 646 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 839;  /* mmx_mulv4hi3 */
    }
  goto ret0;

 L8575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L8576;
  goto ret0;

 L8576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode)
    goto L12684;
  goto ret0;

 L12684: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L8577;
    case PLUS:
      goto L8626;
    default:
     break;
   }
  goto ret0;

 L8577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L12686;
  goto ret0;

 L12686: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L8578;
    case ZERO_EXTEND:
      goto L8588;
    default:
     break;
   }
  goto ret0;

 L8578: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8579;
    }
  goto ret0;

 L8579: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L8580;
  goto ret0;

 L8580: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8581;
    }
  goto ret0;

 L8581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 660 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 840;  /* mmx_smulv4hi3_highpart */
    }
  goto ret0;

 L8588: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8589;
    }
  goto ret0;

 L8589: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L8590;
  goto ret0;

 L8590: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8591;
    }
  goto ret0;

 L8591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 674 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 841;  /* mmx_umulv4hi3_highpart */
    }
  goto ret0;

 L8626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L12688;
  goto ret0;

 L12688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L8627;
    case PLUS:
      goto L9017;
    default:
     break;
   }
  goto ret0;

 L8627: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8628;
  goto ret0;

 L8628: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L8629;
    }
  goto ret0;

 L8629: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8630;
  goto ret0;

 L8630: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L8631;
    }
  goto ret0;

 L8631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L8632;
  goto ret0;

 L8632: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768L)
    goto L8633;
  goto ret0;

 L8633: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768L)
    goto L8634;
  goto ret0;

 L8634: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768L)
    goto L8635;
  goto ret0;

 L8635: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768L)
    goto L8636;
  goto ret0;

 L8636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 717 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 843;  /* mmx_pmulhrwv4hi3 */
    }
  goto ret0;

 L9017: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L9018;
  goto ret0;

 L9018: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L9019;
    }
  goto ret0;

 L9019: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L9020;
  goto ret0;

 L9020: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L9021;
    }
  goto ret0;

 L9021: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L9022;
  goto ret0;

 L9022: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9023;
  goto ret0;

 L9023: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9024;
  goto ret0;

 L9024: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9025;
  goto ret0;

 L9025: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9026;
  goto ret0;

 L9026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1331 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
    {
      return 894;  /* mmx_uavgv4hi3 */
    }
  goto ret0;

 L8659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8660;
    }
  goto ret0;

 L8660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8661;
    }
  goto ret0;

 L8661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 752 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)))
    {
      return 846;  /* mmx_smaxv4hi3 */
    }
  goto ret0;

 L8671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8672;
    }
  goto ret0;

 L8672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8673;
    }
  goto ret0;

 L8673: ATTRIBUTE_UNUSED_LABEL
  if (
#line 772 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)))
    {
      return 848;  /* mmx_sminv4hi3 */
    }
  goto ret0;

 L8677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8678;
    }
  goto ret0;

 L8678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8679;
    }
  goto ret0;

 L8679: ATTRIBUTE_UNUSED_LABEL
  if (
#line 783 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 849;  /* mmx_ashrv4hi3 */
    }
  goto ret0;

 L8689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8690;
    }
  goto ret0;

 L8690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8691;
    }
  goto ret0;

 L8691: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 851;  /* mmx_lshrv4hi3 */
    }
  goto ret0;

 L8708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8709;
    }
  goto ret0;

 L8709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8710;
    }
  goto ret0;

 L8710: ATTRIBUTE_UNUSED_LABEL
  if (
#line 814 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 854;  /* mmx_ashlv4hi3 */
    }
  goto ret0;

 L8733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8734;
    }
  goto ret0;

 L8734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8735;
    }
  goto ret0;

 L8735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)))
    {
      return 858;  /* mmx_eqv4hi3 */
    }
  goto ret0;

 L8751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8752;
    }
  goto ret0;

 L8752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8753;
    }
  goto ret0;

 L8753: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 861;  /* mmx_gtv4hi3 */
    }
  goto ret0;

 L8769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L12691;
  goto ret0;

 L12691: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L8789;
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8770;
    }
  goto ret0;

 L8789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8790;
    }
  goto ret0;

 L8790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8791;
    }
  goto ret0;

 L8791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 867;  /* mmx_nandv4hi3 */
    }
  goto ret0;

 L8770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8771;
    }
  goto ret0;

 L8771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)))
    {
      return 864;  /* mmx_andv4hi3 */
    }
  goto ret0;

 L8808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8809;
    }
  goto ret0;

 L8809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8810;
    }
  goto ret0;

 L8810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)))
    {
      return 870;  /* mmx_iorv4hi3 */
    }
  goto ret0;

 L8826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8827;
    }
  goto ret0;

 L8827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8828;
    }
  goto ret0;

 L8828: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)))
    {
      return 873;  /* mmx_xorv4hi3 */
    }
  goto ret0;

 L8846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8847;
  goto ret0;

 L8847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8848;
    }
  goto ret0;

 L8848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8849;
  goto ret0;

 L8849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8850;
    }
  goto ret0;

 L8850: ATTRIBUTE_UNUSED_LABEL
  if (
#line 928 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 876;  /* mmx_packssdw */
    }
  goto ret0;

 L8892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V8HImode:
      goto L12692;
    case V4HImode:
      goto L12693;
    default:
      break;
    }
  goto ret0;

 L12692: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L8893;
  goto ret0;

 L8893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8894;
    }
  goto ret0;

 L8894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8895;
    }
  goto ret0;

 L8895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L8896;
  goto ret0;

 L8896: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12694;
  goto ret0;

 L12694: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L8897;
      case 0L:
        goto L8908;
      default:
        break;
      }
  goto ret0;

 L8897: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L8898;
  goto ret0;

 L8898: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8899;
  goto ret0;

 L8899: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 983 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 880;  /* mmx_punpckhwd */
    }
  goto ret0;

 L8908: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L8909;
  goto ret0;

 L8909: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8910;
  goto ret0;

 L8910: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 996 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 881;  /* mmx_punpcklwd */
    }
  goto ret0;

 L12693: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8949;
    }
  goto ret0;

 L8949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L8950;
  goto ret0;

 L8950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L8951;
    }
  goto ret0;

 L8951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L8952;
    }
  goto ret0;

 L8952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L8953;
    }
  goto ret0;

 L8953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L8954;
    }
  goto ret0;

 L8954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1089 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 886;  /* mmx_pshufw_1 */
    }
  goto ret0;

 L8932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L8933;
  goto ret0;

 L8933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L8934;
    }
  goto ret0;

 L8934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8935;
    }
  goto ret0;

 L8935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_pow2_1_to_8_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8936;
    }
  goto ret0;

 L8936: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1047 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 884;  /* *mmx_pinsrw */
    }
  goto ret0;

 L8965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L8966;
  goto ret0;

 L8966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8967;
    }
  goto ret0;

 L8967: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1118 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 888;  /* *vec_dupv4hi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case GT:
      goto L8399;
    case GE:
      goto L8405;
    case EQ:
      goto L8411;
    case FIX:
      goto L8417;
    case SIGN_EXTEND:
      goto L8422;
    case PLUS:
      goto L8483;
    case MINUS:
      goto L8532;
    case ASHIFTRT:
      goto L8683;
    case LSHIFTRT:
      goto L8695;
    case ASHIFT:
      goto L8714;
    case AND:
      goto L8775;
    case IOR:
      goto L8814;
    case XOR:
      goto L8832;
    case VEC_SELECT:
      goto L8914;
    case VEC_DUPLICATE:
      goto L8971;
    case VEC_CONCAT:
      goto L8976;
    default:
     break;
   }
  goto ret0;

 L8399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V2SFmode:
      goto L12712;
    case V2SImode:
      goto L12713;
    default:
      break;
    }
  goto ret0;

 L12712: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8400;
    }
  goto ret0;

 L8400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8401;
    }
  goto ret0;

 L8401: ATTRIBUTE_UNUSED_LABEL
  if (
#line 375 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 811;  /* mmx_gtv2sf3 */
    }
  goto ret0;

 L12713: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8758;
    }
  goto ret0;

 L8758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8759;
    }
  goto ret0;

 L8759: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 862;  /* mmx_gtv2si3 */
    }
  goto ret0;

 L8405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8406;
    }
  goto ret0;

 L8406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8407;
    }
  goto ret0;

 L8407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 384 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 812;  /* mmx_gev2sf3 */
    }
  goto ret0;

 L8411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V2SFmode:
      goto L12714;
    case V2SImode:
      goto L12715;
    default:
      break;
    }
  goto ret0;

 L12714: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8412;
    }
  goto ret0;

 L8412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8413;
    }
  goto ret0;

 L8413: ATTRIBUTE_UNUSED_LABEL
  if (
#line 393 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)))
    {
      return 813;  /* mmx_eqv2sf3 */
    }
  goto ret0;

 L12715: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8740;
    }
  goto ret0;

 L8740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8741;
    }
  goto ret0;

 L8741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)))
    {
      return 859;  /* mmx_eqv2si3 */
    }
  goto ret0;

 L8417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8418;
    }
  goto ret0;

 L8418: ATTRIBUTE_UNUSED_LABEL
  if (
#line 407 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 814;  /* mmx_pf2id */
    }
  goto ret0;

 L8422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8423;
  goto ret0;

 L8423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == FIX)
    goto L8424;
  goto ret0;

 L8424: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8425;
    }
  goto ret0;

 L8425: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 815;  /* mmx_pf2iw */
    }
  goto ret0;

 L8483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L12717;
  goto ret0;

 L12717: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L8596;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8484;
    }
  goto ret0;

 L8596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8597;
  goto ret0;

 L8597: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8598;
  goto ret0;

 L8598: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8599;
    }
  goto ret0;

 L8599: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8600;
  goto ret0;

 L8600: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8601;
  goto ret0;

 L8601: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8602;
  goto ret0;

 L8602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8603;
  goto ret0;

 L8603: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8604;
  goto ret0;

 L8604: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8605;
    }
  goto ret0;

 L8605: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8606;
  goto ret0;

 L8606: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8607;
  goto ret0;

 L8607: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L8608;
  goto ret0;

 L8608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == MULT)
    goto L8609;
  goto ret0;

 L8609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8610;
  goto ret0;

 L8610: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8611;
  goto ret0;

 L8611: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L8612;
  goto ret0;

 L8612: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8613;
  goto ret0;

 L8613: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8614;
  goto ret0;

 L8614: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L8615;
  goto ret0;

 L8615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8616;
  goto ret0;

 L8616: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8617;
  goto ret0;

 L8617: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L8618;
  goto ret0;

 L8618: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8619;
  goto ret0;

 L8619: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8620;
  goto ret0;

 L8620: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 699 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 842;  /* mmx_pmaddwd */
    }
  goto ret0;

 L8484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8485;
    }
  goto ret0;

 L8485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands)))
    {
      return 825;  /* mmx_addv2si3 */
    }
  goto ret0;

 L8532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8533;
    }
  goto ret0;

 L8533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8534;
    }
  goto ret0;

 L8534: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 833;  /* mmx_subv2si3 */
    }
  goto ret0;

 L8683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8684;
    }
  goto ret0;

 L8684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8685;
    }
  goto ret0;

 L8685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 783 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 850;  /* mmx_ashrv2si3 */
    }
  goto ret0;

 L8695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8696;
    }
  goto ret0;

 L8696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8697;
    }
  goto ret0;

 L8697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 852;  /* mmx_lshrv2si3 */
    }
  goto ret0;

 L8714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8715;
    }
  goto ret0;

 L8715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8716;
    }
  goto ret0;

 L8716: ATTRIBUTE_UNUSED_LABEL
  if (
#line 814 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 855;  /* mmx_ashlv2si3 */
    }
  goto ret0;

 L8775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L12719;
  goto ret0;

 L12719: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L8796;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8776;
    }
  goto ret0;

 L8796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8797;
    }
  goto ret0;

 L8797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8798;
    }
  goto ret0;

 L8798: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 868;  /* mmx_nandv2si3 */
    }
  goto ret0;

 L8776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8777;
    }
  goto ret0;

 L8777: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)))
    {
      return 865;  /* mmx_andv2si3 */
    }
  goto ret0;

 L8814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8815;
    }
  goto ret0;

 L8815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8816;
    }
  goto ret0;

 L8816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)))
    {
      return 871;  /* mmx_iorv2si3 */
    }
  goto ret0;

 L8832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8833;
    }
  goto ret0;

 L8833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8834;
    }
  goto ret0;

 L8834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)))
    {
      return 874;  /* mmx_xorv2si3 */
    }
  goto ret0;

 L8914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V4SImode:
      goto L12720;
    case V2SImode:
      goto L12721;
    default:
      break;
    }
  goto ret0;

 L12720: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L8915;
  goto ret0;

 L8915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8916;
    }
  goto ret0;

 L8916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8917;
    }
  goto ret0;

 L8917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8918;
  goto ret0;

 L8918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12722;
  goto ret0;

 L12722: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L8919;
      case 0L:
        goto L8928;
      default:
        break;
      }
  goto ret0;

 L8919: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1009 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 882;  /* mmx_punpckhdq */
    }
  goto ret0;

 L8928: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 1022 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 883;  /* mmx_punpckldq */
    }
  goto ret0;

 L12721: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8959;
    }
  goto ret0;

 L8959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8960;
  goto ret0;

 L8960: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8961;
  goto ret0;

 L8961: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1108 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 887;  /* mmx_pswapdv2si2 */
    }
  goto ret0;

 L8971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8972;
    }
  goto ret0;

 L8972: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1127 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 889;  /* *vec_dupv2si */
    }
  goto ret0;

 L8976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8977;
    }
  goto ret0;

 L8977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8978;
    }
  goto ret0;

 L8978: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1137 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
    {
      return 890;  /* *mmx_concatv2si */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8289;
    case MINUS:
      goto L8295;
    case MULT:
      goto L8301;
    case SMAX:
      goto L8307;
    case SMIN:
      goto L8313;
    case UNSPEC:
      goto L12739;
    case VEC_CONCAT:
      goto L8347;
    case VEC_MERGE:
      goto L8389;
    case FLOAT:
      goto L8429;
    case VEC_SELECT:
      goto L8441;
    case VEC_DUPLICATE:
      goto L8448;
    default:
     break;
   }
  goto ret0;

 L8289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8290;
    }
  goto ret0;

 L8290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8291;
    }
  goto ret0;

 L8291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 218 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)))
    {
      return 798;  /* mmx_addv2sf3 */
    }
  goto ret0;

 L8295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8296;
    }
  goto ret0;

 L8296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8297;
    }
  goto ret0;

 L8297: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 799;  /* mmx_subv2sf3 */
    }
  goto ret0;

 L8301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8302;
    }
  goto ret0;

 L8302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8303;
    }
  goto ret0;

 L8303: ATTRIBUTE_UNUSED_LABEL
  if (
#line 245 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)))
    {
      return 800;  /* mmx_mulv2sf3 */
    }
  goto ret0;

 L8307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8308;
    }
  goto ret0;

 L8308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8309;
    }
  goto ret0;

 L8309: ATTRIBUTE_UNUSED_LABEL
  if (
#line 254 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)))
    {
      return 801;  /* mmx_smaxv2sf3 */
    }
  goto ret0;

 L8313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8314;
    }
  goto ret0;

 L8314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8315;
    }
  goto ret0;

 L8315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)))
    {
      return 802;  /* mmx_sminv2sf3 */
    }
  goto ret0;

 L12739: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L12744;
    case 2:
      goto L12745;
    default:
      break;
    }
  goto ret0;

 L12744: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 39L:
      goto L8319;
    case 42L:
      goto L8336;
    default:
      break;
    }
  goto ret0;

 L8319: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8320;
    }
  goto ret0;

 L8320: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 803;  /* mmx_rcpv2sf2 */
    }
  goto ret0;

 L8336: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8337;
    }
  goto ret0;

 L8337: ATTRIBUTE_UNUSED_LABEL
  if (
#line 301 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 806;  /* mmx_rsqrtv2sf2 */
    }
  goto ret0;

 L12745: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 40L:
      goto L8324;
    case 41L:
      goto L8330;
    case 43L:
      goto L8341;
    default:
      break;
    }
  goto ret0;

 L8324: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8325;
    }
  goto ret0;

 L8325: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8326;
    }
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 804;  /* mmx_rcpit1v2sf3 */
    }
  goto ret0;

 L8330: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8331;
    }
  goto ret0;

 L8331: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8332;
    }
  goto ret0;

 L8332: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 805;  /* mmx_rcpit2v2sf3 */
    }
  goto ret0;

 L8341: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8342;
    }
  goto ret0;

 L8342: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8343;
    }
  goto ret0;

 L8343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 311 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 807;  /* mmx_rsqit1v2sf3 */
    }
  goto ret0;

 L8347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L12749;
  goto ret0;

 L12749: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L8348;
    case MINUS:
      goto L8369;
    case REG:
    case SUBREG:
    case MEM:
      goto L12751;
    default:
      goto ret0;
   }
 L12751: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L8454;
    }
  goto ret0;

 L8348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8349;
  goto ret0;

 L8349: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8350;
    }
  goto ret0;

 L8350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8351;
  goto ret0;

 L8351: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8352;
  goto ret0;

 L8352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8353;
  goto ret0;

 L8353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L8354;
  goto ret0;

 L8354: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8355;
  goto ret0;

 L8355: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8356;
  goto ret0;

 L8356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == PLUS)
    goto L8357;
  goto ret0;

 L8357: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8358;
  goto ret0;

 L8358: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L8359;
    }
  goto ret0;

 L8359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8360;
  goto ret0;

 L8360: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8361;
  goto ret0;

 L8361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8362;
  goto ret0;

 L8362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L8363;
  goto ret0;

 L8363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8364;
  goto ret0;

 L8364: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 329 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 808;  /* mmx_haddv2sf3 */
    }
  goto ret0;

 L8369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8370;
  goto ret0;

 L8370: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8371;
    }
  goto ret0;

 L8371: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8372;
  goto ret0;

 L8372: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8373;
  goto ret0;

 L8373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8374;
  goto ret0;

 L8374: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L8375;
  goto ret0;

 L8375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8376;
  goto ret0;

 L8376: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8377;
  goto ret0;

 L8377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == MINUS)
    goto L8378;
  goto ret0;

 L8378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8379;
  goto ret0;

 L8379: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L8380;
    }
  goto ret0;

 L8380: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8381;
  goto ret0;

 L8381: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8382;
  goto ret0;

 L8382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8383;
  goto ret0;

 L8383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L8384;
  goto ret0;

 L8384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8385;
  goto ret0;

 L8385: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 347 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 809;  /* mmx_hsubv2sf3 */
    }
  goto ret0;

 L8454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L8455;
    }
  goto ret0;

 L8455: ATTRIBUTE_UNUSED_LABEL
  if (
#line 471 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
    {
      return 820;  /* *mmx_concatv2sf */
    }
  goto ret0;

 L8389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == PLUS)
    goto L8390;
  goto ret0;

 L8390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L8391;
    }
  goto ret0;

 L8391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L8392;
    }
  goto ret0;

 L8392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == MINUS)
    goto L8393;
  goto ret0;

 L8393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8394;
  goto ret0;

 L8394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L8395;
  goto ret0;

 L8395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 360 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 810;  /* mmx_addsubv2sf3 */
    }
  goto ret0;

 L8429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L12752;
  goto ret0;

 L12752: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L8430;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8437;
    }
  goto ret0;

 L8430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L8431;
  goto ret0;

 L8431: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8432;
    }
  goto ret0;

 L8432: ATTRIBUTE_UNUSED_LABEL
  if (
#line 429 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 816;  /* mmx_pi2fw */
    }
  goto ret0;

 L8437: ATTRIBUTE_UNUSED_LABEL
  if (
#line 437 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 817;  /* mmx_floatv2si2 */
    }
  goto ret0;

 L8441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8442;
    }
  goto ret0;

 L8442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8443;
  goto ret0;

 L8443: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8444;
  goto ret0;

 L8444: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 452 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 818;  /* mmx_pswapdv2sf2 */
    }
  goto ret0;

 L8448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L8449;
    }
  goto ret0;

 L8449: ATTRIBUTE_UNUSED_LABEL
  if (
#line 461 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 819;  /* *vec_dupv2sf */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L11824;
    case CCmode:
      goto L11820;
    case SImode:
      goto L11821;
    case QImode:
      goto L11826;
    case DImode:
      goto L11829;
    case TImode:
      goto L11831;
    case SFmode:
      goto L11832;
    case DFmode:
      goto L11834;
    case XFmode:
      goto L11836;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L2;
 L159: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCFPmode:
      goto L11858;
    case CCFPUmode:
      goto L11859;
    default:
      break;
    }
 L280: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L281;
    case PC:
      goto L4721;
    case REG:
    case SUBREG:
      goto L1090;
    default:
      goto L6352;
   }
 L1090: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1091;
    }
 L6352: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L6353;
 L6428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCZmode:
      goto L11860;
    case V16QImode:
      goto L11890;
    case V8HImode:
      goto L11862;
    case V4SImode:
      goto L11863;
    case V2DImode:
      goto L11864;
    case V4SFmode:
      goto L11865;
    case V2DFmode:
      goto L11866;
    case SImode:
      goto L11870;
    case CCFPmode:
      goto L11874;
    case CCFPUmode:
      goto L11875;
    case SFmode:
      goto L11876;
    case V2SImode:
      goto L11877;
    case V2SFmode:
      goto L11880;
    case DFmode:
      goto L11883;
    case TImode:
      goto L11887;
    case DImode:
      goto L11889;
    default:
      break;
    }
 L8242: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L8243;
 L8266: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V8QImode:
      goto L11904;
    case V4HImode:
      goto L11892;
    case V2SImode:
      goto L11893;
    case V2SFmode:
      goto L11894;
    case DImode:
      goto L11895;
    case SFmode:
      goto L11898;
    case SImode:
      goto L11902;
    case QImode:
      goto L11905;
    case HImode:
      goto L11906;
    default:
      break;
    }
  goto ret0;

 L11824: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L11820: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L156;
  goto L1;

 L156: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 22)
    goto L157;
  x1 = XEXP (x0, 0);
  goto L1;

 L157: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      return 21;  /* x86_sahf_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L11821: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L11826: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L11829: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L381;
    }
 L11830: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L534;
    }
 L11845: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L737;
    }
 L11848: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L827;
    }
 L11854: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1735;
    }
 L11855: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5521;
    }
  goto L1;

 L381: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DImode))
    {
      operands[1] = x1;
      return 55;  /* *pushdi */
    }
  x1 = XEXP (x0, 0);
  goto L11830;

 L534: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L12061;
 L384: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L385;
    }
  x1 = XEXP (x0, 0);
  goto L11845;

 L12061: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L535;
    case SIGN_EXTEND:
      goto L549;
    case FIX:
      goto L699;
    default:
     break;
   }
  goto L384;

 L535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L536;
    }
  goto L384;

 L536: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 79;  /* zero_extendsidi2_32 */
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L550;
    }
  goto L384;

 L550: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 80;  /* *extendsidi2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L700;
    }
  goto L384;

 L700: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4166 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 107;  /* fix_truncdi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 1);
  goto L384;

 L385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1931 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 56;  /* *movdi_2 */
    }
  x1 = XEXP (x0, 0);
  goto L11845;

 L737: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == FIX)
    goto L738;
  x1 = XEXP (x0, 0);
  goto L11848;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L739;
    }
  x1 = XEXP (x0, 0);
  goto L11848;

 L739: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 110;  /* fix_truncdi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L11848;

 L827: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L12064;
  x1 = XEXP (x0, 0);
  goto L11854;

 L12064: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L828;
    case PLUS:
      goto L1007;
    case MINUS:
      goto L1458;
    case NEG:
      goto L2852;
    case UNSPEC:
      goto L12071;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11854;

 L828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L829;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L829: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 116;  /* *fix_truncdi_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1008;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1009;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1009: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4761 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 138;  /* *adddi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1459;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1460;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6491 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 168;  /* *subdi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2853;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L2853: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9336 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 250;  /* *negdi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L12071: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L12074;
  x1 = XEXP (x0, 0);
  goto L11854;

 L12074: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 66L:
      goto L5509;
    case 74L:
      goto L5634;
    case 75L:
      goto L5784;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5509: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5510;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16925 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 478;  /* *fistdi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5634: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5635;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5635: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 491;  /* *fistdi2_floor_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5785;
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L5785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 502;  /* *fistdi2_ceil_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11854;

 L1735: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L12077;
  x1 = XEXP (x0, 0);
  goto L11855;

 L12077: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L1736;
    case ASHIFT:
      goto L3219;
    case ASHIFTRT:
      goto L3421;
    case LSHIFTRT:
      goto L3776;
    case ROTATE:
      goto L4094;
    case ROTATERT:
      goto L4226;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L12083;
  x1 = XEXP (x0, 0);
  goto L11855;

 L12083: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1737;
    case SIGN_EXTEND:
      goto L1755;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1738;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1739;
  x1 = XEXP (x0, 0);
  goto L11855;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1740;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7049 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 187;  /* *umulsidi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1756;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1757;
  x1 = XEXP (x0, 0);
  goto L11855;

 L1757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1758;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L1758: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7101 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 188;  /* *mulsidi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_pm1_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3220;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3221;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3221: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 286;  /* *ashldi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3422;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3423;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3423: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 299;  /* *ashrdi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3777;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3778;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L3778: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 322;  /* *lshrdi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4095;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_1_to_31_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4096;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4096: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 343;  /* ix86_rotldi3 */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4227;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_1_to_31_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4228;
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L4228: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 352;  /* ix86_rotrdi3 */
    }
  x1 = XEXP (x0, 0);
  goto L11855;

 L5521: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 66)
    goto L5522;
  x1 = XEXP (x0, 0);
  goto L1;

 L5522: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5523;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16950 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 479;  /* fistdi2 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L11831: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L388;
    }
  goto L1;

 L388: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L389;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2123 "../../gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 57;  /* *movti_internal */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L11832: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L392;
    }
 L11833: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L590;
    }
 L11838: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L621;
    }
 L11839: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L634;
    }
 L11840: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L647;
    }
  goto L1;

 L392: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      return 58;  /* *pushsf */
    }
  x1 = XEXP (x0, 0);
  goto L11833;

 L590: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L591;
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L396;
    }
  x1 = XEXP (x0, 0);
  goto L11838;

 L591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L592;
    }
  x1 = XEXP (x0, 0);
  goto L11838;

 L592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3703 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations))
    {
      return 89;  /* *truncdfsf_fast_mixed */
    }
 L597: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3729 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 90;  /* *truncdfsf_fast_sse */
    }
 L602: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3738 "../../gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 91;  /* *truncdfsf_fast_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L11838;

 L396: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2277 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode))))
    {
      return 59;  /* *movsf_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11838;

 L621: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L622;
  x1 = XEXP (x0, 0);
  goto L11839;

 L622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L623;
    }
  x1 = XEXP (x0, 0);
  goto L11839;

 L623: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3797 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387))
    {
      return 94;  /* *truncdfsf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11839;

 L634: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L12085;
  x1 = XEXP (x0, 0);
  goto L11840;

 L12085: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11840;

 L647: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L648;
  x1 = XEXP (x0, 0);
  goto L1;

 L648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L649;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L649: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3890 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 98;  /* *truncxfsf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L11834: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L406;
    }
 L11835: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L565;
    }
 L11841: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L660;
    }
 L11842: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L673;
    }
  goto L1;

 L406: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L407;
    }
  x1 = XEXP (x0, 0);
  goto L11835;

 L407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2390 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES))
    {
      return 61;  /* *pushdf_nointeger */
    }
 L411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2402 "../../gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    {
      return 62;  /* *pushdf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L11835;

 L565: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L566;
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L415;
    }
  x1 = XEXP (x0, 0);
  goto L11841;

 L566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L567;
    }
  x1 = XEXP (x0, 0);
  goto L11841;

 L567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3529 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 84;  /* *extendsfdf2_mixed */
    }
 L572: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3556 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 85;  /* *extendsfdf2_sse */
    }
 L577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3565 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 86;  /* *extendsfdf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L11841;

 L415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2444 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 63;  /* *movdf_nointeger */
    }
 L419: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2564 "../../gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 64;  /* *movdf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L11841;

 L660: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L12131;
  x1 = XEXP (x0, 0);
  goto L11842;

 L12131: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11842;

 L673: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L674;
  x1 = XEXP (x0, 0);
  goto L1;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L675;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L675: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3988 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 102;  /* *truncxfdf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L11836: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L429;
    }
 L11837: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L580;
    }
 L11850: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L983;
    }
  goto L1;

 L429: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L430;
    }
  x1 = XEXP (x0, 0);
  goto L11837;

 L430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2725 "../../gcc/config/i386/i386.md"
(optimize_size))
    {
      return 66;  /* *pushxf_nointeger */
    }
 L434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2737 "../../gcc/config/i386/i386.md"
(!optimize_size))
    {
      return 67;  /* *pushxf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L11837;

 L580: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L581;
  if (general_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L438;
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12190;
    case DFmode:
      goto L12191;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L12190: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L582;
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L582: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3602 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 87;  /* *extendsfxf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L12191: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L587;
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L587: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3641 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 88;  /* *extenddfxf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L438: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2776 "../../gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 68;  /* *movxf_nointeger */
    }
 L442: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2810 "../../gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 69;  /* *movxf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L11850;

 L983: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L12192;
  x1 = XEXP (x0, 0);
  goto L1;

 L12192: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L159;

 L3: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L159;

 L11858: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L160;
  goto L280;

 L160: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L161;
  x1 = XEXP (x0, 0);
  goto L280;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L162;
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L163;
    }
 L174: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L175;
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L163: ATTRIBUTE_UNUSED_LABEL
  if (
#line 966 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 22;  /* *cmpfp_i_mixed */
    }
 L169: ATTRIBUTE_UNUSED_LABEL
  if (
#line 981 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 23;  /* *cmpfp_i_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L174;

 L175: ATTRIBUTE_UNUSED_LABEL
  if (
#line 996 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 24;  /* *cmpfp_i_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L11859: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L178;
  goto L280;

 L178: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L179;
  x1 = XEXP (x0, 0);
  goto L280;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L180;
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L181;
    }
 L192: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L193;
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L181: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1015 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 25;  /* *cmpfp_iu_mixed */
    }
 L187: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1030 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 26;  /* *cmpfp_iu_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L192;

 L193: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1045 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 27;  /* *cmpfp_iu_387 */
    }
  x1 = XEXP (x0, 0);
  goto L280;

 L281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L12312;
    case QImode:
      goto L12314;
    default:
      break;
    }
  goto L6352;

 L12312: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L282;
    }
 L12313: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L294;
    }
  goto L6352;

 L282: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L283;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L12313;

 L283: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1408 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 40;  /* *movstricthi_1 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L12313;

 L294: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L295;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L295: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1418 "../../gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 41;  /* *movstricthi_xor */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L12314: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1323;
    }
 L12315: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L332;
    }
  goto L6352;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L12316;
 L320: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L321;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L12315;

 L12316: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1324;
    case MINUS:
      goto L1618;
    case AND:
      goto L2170;
    case IOR:
      goto L2437;
    case XOR:
      goto L2687;
    case ASHIFTRT:
      goto L3670;
    case LSHIFTRT:
      goto L3986;
    case ROTATE:
      goto L4166;
    case ROTATERT:
      goto L4312;
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
    case LTGT:
      goto L12325;
    default:
      goto L320;
   }
 L12325: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L4354;
    }
  goto L320;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1325;
  goto L320;

 L1325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1326;
    }
  goto L320;

 L1326: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6131 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 161;  /* *addqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L1618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1619;
  goto L320;

 L1619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1620;
    }
  goto L320;

 L1620: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6760 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 179;  /* *subqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2171;
  goto L320;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2172;
    }
  goto L320;

 L2172: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8263 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 213;  /* *andqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2438;
  goto L320;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2439;
    }
  goto L320;

 L2439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8687 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 228;  /* *iorqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2688;
  goto L320;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2689;
    }
  goto L320;

 L2689: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9064 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 242;  /* *xorqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L3670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3671;
  goto L320;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3672;
    }
 L3701: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3702;
    }
  goto L320;

 L3672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11708 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 315;  /* *ashrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3701;

 L3702: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11735 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 317;  /* *ashrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L3986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3987;
  goto L320;

 L3987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3988;
    }
 L4017: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4018;
    }
  goto L320;

 L3988: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12276 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 336;  /* *lshrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4017;

 L4018: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12302 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 338;  /* *lshrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L4166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L4167;
  goto L320;

 L4167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4168;
    }
 L4197: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4198;
    }
  goto L320;

 L4168: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12553 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 348;  /* *rotlqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4197;

 L4198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12581 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 350;  /* *rotlqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L4313;
  goto L320;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4314;
    }
 L4343: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4344;
    }
  goto L320;

 L4314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12794 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 358;  /* *rotrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4343;

 L4344: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12820 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 360;  /* *rotrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L320;

 L4354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4355;
  goto L320;

 L4355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 362;  /* *setcc_2 */
    }
  goto L320;

 L321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1578 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 46;  /* *movstrictqi_1 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L12315;

 L332: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L333;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1588 "../../gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 47;  /* *movstrictqi_xor */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4721: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      return 381;  /* *indirect_jump */
    }
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L4371;
    case LABEL_REF:
      goto L4718;
    case UNSPEC:
      goto L12326;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L4372;
    }
 L4403: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L4681;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L4373;
  goto L4403;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4374;
  goto L4403;

 L4374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4375;
    case PC:
      goto L4384;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4403;

 L4375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L4376;

 L4376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 365;  /* *jcc_1 */
    }
  x2 = XEXP (x1, 0);
  goto L4403;

 L4384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4385;
  x2 = XEXP (x1, 0);
  goto L4403;

 L4385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 366;  /* *jcc_2 */

 L4681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (float_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L4682;
    }
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L4405;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4682: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L12327;
    case SImode:
      goto L12328;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L12327: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L4683;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L4684;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4685;
  x1 = XEXP (x0, 0);
  goto L6352;

 L4685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L4686;

 L4686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13694 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 378;  /* *fp_jcc_8hi_387 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L12328: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4711;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L4712;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4713;
  x1 = XEXP (x0, 0);
  goto L6352;

 L4713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L4714;

 L4714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13694 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 379;  /* *fp_jcc_8si_387 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4406;
    }
 L4451: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4452;
    }
 L4549: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4550;
    }
 L4602: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4603;
    }
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4656;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4407;
    case PC:
      goto L4476;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4451;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4408;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    goto L12329;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4451;

 L12329: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13508 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 367;  /* *fp_jcc_1_mixed */
    }
 L12330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13523 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 368;  /* *fp_jcc_1_sse */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4451;

 L4476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4477;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4451;

 L4477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4478;

 L4478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13553 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 370;  /* *fp_jcc_2_mixed */
    }
 L4502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13568 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 371;  /* *fp_jcc_2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4451;

 L4452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4453;
    case PC:
      goto L4524;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4549;

 L4453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4454;

 L4454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13538 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 369;  /* *fp_jcc_1_387 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4549;

 L4524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4525;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4549;

 L4525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4526;

 L4526: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13583 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 372;  /* *fp_jcc_2_387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4549;

 L4550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4551;
    case PC:
      goto L4577;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4602;

 L4551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4552;

 L4552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13599 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 373;  /* *fp_jcc_3_387 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4602;

 L4577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4578;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4602;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4579;

 L4579: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13618 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 374;  /* *fp_jcc_4_387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4602;

 L4603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L4604;
    case PC:
      goto L4630;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4605;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13637 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 375;  /* *fp_jcc_5_387 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4631;
  x1 = XEXP (x0, 0);
  goto L6352;

 L4631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4632;

 L4632: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13653 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 376;  /* *fp_jcc_6_387 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4657;
  x1 = XEXP (x0, 0);
  goto L6352;

 L4657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L4658;

 L4658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13669 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 377;  /* *fp_jcc_7_387 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L4718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 380;  /* jump */

 L12326: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 27)
    goto L4797;
  x1 = XEXP (x0, 0);
  goto L6352;

 L4797: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      return 396;  /* eh_return_si */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS)
    goto L1092;
  x1 = XEXP (x0, 0);
  goto L6352;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1109;
    case MULT:
      goto L1101;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L1110;
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1094;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1110: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (index_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1111;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1112;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1113;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1114;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5030 "../../gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])))
    {
      return 147;  /* *lea_general_3 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1095;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1096;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1096: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4928 "../../gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 145;  /* *lea_general_1 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1102;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1103;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1104;
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L1104: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4980 "../../gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 146;  /* *lea_general_2 */
    }
  x1 = XEXP (x0, 0);
  goto L6352;

 L6353: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L6354;
  x1 = XEXP (x0, 0);
  goto L6428;

 L6354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L6355;
  x1 = XEXP (x0, 0);
  goto L6428;

 L6355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12331;
  x1 = XEXP (x0, 0);
  goto L6428;

 L12331: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6356;
    }
 L12332: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6362;
    }
 L12333: ATTRIBUTE_UNUSED_LABEL
  if (sibcall_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6369;
    }
  x1 = XEXP (x0, 0);
  goto L6428;

 L6356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  return 546;  /* *call_value_0 */

 L6362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L6363;

 L6363: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20314 "../../gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT))
    {
      return 547;  /* *call_value_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L12333;

 L6369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L6370;

 L6370: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20326 "../../gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT))
    {
      return 548;  /* *sibcall_value_1 */
    }
  x1 = XEXP (x0, 0);
  goto L6428;

 L11860: ATTRIBUTE_UNUSED_LABEL
  if (flags_reg_operand (x1, CCZmode))
    {
      operands[0] = x1;
      goto L6429;
    }
  goto L8242;

 L6429: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCZmode)
    goto L12334;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12334: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L12336;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12336: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L12338;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12338: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 101L:
      goto L6430;
    case 103L:
      goto L6444;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6430: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6431;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6431: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6432;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6432: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 554;  /* stack_protect_test_si */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6445;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6445: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6446;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6446: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 555;  /* stack_tls_protect_test_si */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11890: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L8228;
 L11861: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L6483;
    }
 L11871: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L6508;
    }
  goto L8242;

 L8228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8229;
    }
  goto L11861;

 L8229: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L8230;
  x1 = XEXP (x0, 0);
  goto L11861;

 L8230: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8231;
    }
  x1 = XEXP (x0, 0);
  goto L11861;

 L8231: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L8232;
    }
  x1 = XEXP (x0, 0);
  goto L11861;

 L8232: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == MEM)
    goto L8233;
  x1 = XEXP (x0, 0);
  goto L11861;

 L8233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 3796 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT))
    {
      return 784;  /* *sse2_maskmovdqu */
    }
  x1 = XEXP (x0, 0);
  goto L11861;

 L6483: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L6484;
  if (vector_move_operand (x1, V16QImode))
    {
      operands[1] = x1;
      goto L6450;
    }
  x1 = XEXP (x0, 0);
  goto L11871;

 L6484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L6485;
    }
  x1 = XEXP (x0, 0);
  goto L11871;

 L6485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 237 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 564;  /* sse2_movdqu */
    }
  x1 = XEXP (x0, 0);
  goto L11871;

 L6450: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 556;  /* *movv16qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11871;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode)
    goto L12340;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12340: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8242;

 L11862: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L6453;
    }
 L11885: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L7525;
    }
  goto L8242;

 L6453: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V8HImode))
    {
      operands[1] = x1;
      goto L6454;
    }
  x1 = XEXP (x0, 0);
  goto L11885;

 L6454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 557;  /* *movv8hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11885;

 L7525: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8HImode)
    goto L12364;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12364: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8242;

 L11863: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L6457;
    }
 L11879: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L6914;
    }
  goto L8242;

 L6457: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L6458;
    }
  x1 = XEXP (x0, 0);
  goto L11879;

 L6458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 558;  /* *movv4si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11879;

 L6914: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SImode)
    goto L12397;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12397: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8242;

 L11864: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L6461;
    }
 L11869: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L6498;
    }
 L11886: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L7537;
    }
  goto L8242;

 L6461: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2DImode))
    {
      operands[1] = x1;
      goto L6462;
    }
  x1 = XEXP (x0, 0);
  goto L11869;

 L6462: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 559;  /* *movv2di_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11869;

 L6498: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L6499;
  x1 = XEXP (x0, 0);
  goto L11886;

 L6499: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L6500;
    }
  x1 = XEXP (x0, 0);
  goto L11886;

 L6500: ATTRIBUTE_UNUSED_LABEL
  if (
#line 264 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 567;  /* sse2_movntv2di */
    }
  x1 = XEXP (x0, 0);
  goto L11886;

 L7537: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode)
    goto L12426;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12426: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7538;
    case MINUS:
      goto L7586;
    case MULT:
      goto L7642;
    case LSHIFTRT:
      goto L7718;
    case ASHIFT:
      goto L7736;
    case AND:
      goto L7832;
    case IOR:
      goto L7884;
    case XOR:
      goto L7908;
    case VEC_SELECT:
      goto L8036;
    case VEC_DUPLICATE:
      goto L8131;
    case VEC_CONCAT:
      goto L8154;
    case UNSPEC:
      goto L12438;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7539;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7540;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7540: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)))
    {
      return 699;  /* *addv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7587;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7588;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2465 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 707;  /* *subv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7643;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7644;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SImode))
    {
      operands[1] = x4;
      goto L7645;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7646;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7646: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7647;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L7648;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L7649;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L7650;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SImode))
    {
      operands[2] = x4;
      goto L7651;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7651: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L7652;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7652: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7653;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7653: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2591 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 715;  /* sse2_umulv2siv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7719;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7720;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7720: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2737 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 721;  /* lshrv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7737;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7738;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7738: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2747 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 724;  /* ashlv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode)
    goto L12440;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12440: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7860;
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7833;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L7861;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7862;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3058 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 744;  /* sse2_nandv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7834;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3048 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)))
    {
      return 740;  /* *andv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7885;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7886;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7886: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3075 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)))
    {
      return 748;  /* *iorv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L7909;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L7910;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7910: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3092 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)))
    {
      return 752;  /* *xorv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L8037;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L8038;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L8039;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8040;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8040: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12441;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12441: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L8041;
      case 0L:
        goto L8050;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8041: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 3241 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 762;  /* sse2_punpckhqdq */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8050: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 3254 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 763;  /* sse2_punpcklqdq */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8132;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8132: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3501 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 773;  /* *vec_dupv2di */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8155;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8156;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8156: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3557 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 777;  /* *vec_concatv2di */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12438: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 46)
    goto L8208;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8208: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8209;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8209: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L8210;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8210: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3749 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 780;  /* sse2_psadbw */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11865: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L6473;
    }
 L11867: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L6488;
    }
 L11872: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L6513;
    }
  goto L8242;

 L6473: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L12443;
 L6465: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L6466;
    }
  x1 = XEXP (x0, 0);
  goto L11867;

 L12443: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12447;
    case VEC_SELECT:
      goto L6925;
    case VEC_CONCAT:
      goto L7010;
    case VEC_MERGE:
      goto L7059;
    default:
     break;
   }
  goto L6465;

 L12447: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L6474;
  goto L6465;

 L6474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6475;
    }
  goto L6465;

 L6475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 219 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 562;  /* sse_movups */
    }
  x1 = XEXP (x0, 1);
  goto L6465;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L6926;
  goto L6465;

 L6926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6927;
    }
  goto L6465;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L6928;
    }
  goto L6465;

 L6928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L6929;
  goto L6465;

 L6929: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12448;
  goto L6465;

 L12448: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 6L:
        goto L6930;
      case 0L:
        goto L6941;
      default:
        break;
      }
  goto L6465;

 L6930: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L6931;
  goto L6465;

 L6931: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6932;
  goto L6465;

 L6932: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1072 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 620;  /* sse_movhlps */
    }
  goto L6465;

 L6941: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6942;
  goto L6465;

 L6942: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L6943;
  goto L6465;

 L6943: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 1090 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)))
    {
      return 621;  /* sse_movlhps */
    }
  goto L6465;

 L7010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L12450;
  goto L6465;

 L12450: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7011;
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7028;
    }
  goto L6465;

 L7011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7012;
    }
  goto L6465;

 L7012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7013;
  goto L6465;

 L7013: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7014;
  goto L6465;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7015;
  goto L6465;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L7016;
    }
  goto L6465;

 L7016: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1216 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 628;  /* sse_loadhps */
    }
  x1 = XEXP (x0, 1);
  goto L6465;

 L7028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7029;
  goto L6465;

 L7029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7030;
    }
  goto L6465;

 L7030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L7031;
  goto L6465;

 L7031: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L7032;
  goto L6465;

 L7032: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1244 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 630;  /* sse_loadlps */
    }
  goto L6465;

 L7059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L7060;
  goto L6465;

 L7060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7061;
    }
  goto L6465;

 L7061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7062;
    }
  goto L6465;

 L7062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1317 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 635;  /* *vec_setv4sf_0 */
    }
  goto L6465;

 L6466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 115 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 560;  /* *movv4sf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11867;

 L6488: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L6489;
  x1 = XEXP (x0, 0);
  goto L11872;

 L6489: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L6490;
    }
  x1 = XEXP (x0, 0);
  goto L11872;

 L6490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 246 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 565;  /* sse_movntv4sf */
    }
  x1 = XEXP (x0, 0);
  goto L11872;

 L6513: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L12452;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12452: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8242;

 L11866: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L6478;
    }
 L11868: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L6493;
    }
 L11873: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L6673;
    }
  goto L8242;

 L6478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L12523;
 L6469: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      goto L6470;
    }
  x1 = XEXP (x0, 0);
  goto L11868;

 L12523: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12527;
    case VEC_SELECT:
      goto L7427;
    case VEC_CONCAT:
      goto L7476;
    case VEC_MERGE:
      goto L7493;
    default:
     break;
   }
  goto L6469;

 L12527: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L6479;
  goto L6469;

 L6479: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L6480;
    }
  goto L6469;

 L6480: ATTRIBUTE_UNUSED_LABEL
  if (
#line 228 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 563;  /* sse2_movupd */
    }
  x1 = XEXP (x0, 1);
  goto L6469;

 L7427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L7428;
  goto L6469;

 L7428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7429;
    }
  goto L6469;

 L7429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7430;
    }
 L7438: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[1]))
    goto L7439;
 L7447: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L7448;
    }
  goto L6469;

 L7430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7431;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7438;

 L7431: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L7432;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7438;

 L7432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 2111 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 683;  /* sse2_unpckhpd */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7438;

 L7439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7440;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7447;

 L7440: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7441;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7447;

 L7441: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2127 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 684;  /* *sse3_movddup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L7447;

 L7448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7449;
  goto L6469;

 L7449: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7450;
  goto L6469;

 L7450: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2159 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 685;  /* sse2_unpcklpd */
    }
  goto L6469;

 L7476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12528;
  goto L6469;

 L12528: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7477;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7486;
    }
  goto L6469;

 L7477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7478;
    }
  goto L6469;

 L7478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7479;
  goto L6469;

 L7479: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7480;
  goto L6469;

 L7480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7481;
    }
  goto L6469;

 L7481: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2262 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 689;  /* sse2_loadhpd */
    }
  x1 = XEXP (x0, 1);
  goto L6469;

 L7486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7487;
  goto L6469;

 L7487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (vector_move_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7488;
    }
  goto L6469;

 L7488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7489;
  goto L6469;

 L7489: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2289 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 690;  /* sse2_loadlpd */
    }
  goto L6469;

 L7493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L7494;
    }
  goto L6469;

 L7494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7495;
    }
  goto L6469;

 L7495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2317 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 691;  /* sse2_movsd */
    }
  goto L6469;

 L6470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 149 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 561;  /* *movv2df_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11868;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L6494;
  x1 = XEXP (x0, 0);
  goto L11873;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L6495;
    }
  x1 = XEXP (x0, 0);
  goto L11873;

 L6495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 255 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 566;  /* sse2_movntv2df */
    }
  x1 = XEXP (x0, 0);
  goto L11873;

 L6673: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L12530;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12530: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8242;

 L11870: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L6503;
    }
 L11878: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L6895;
    }
 L11888: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8113;
    }
  goto L8242;

 L6503: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L12582;
  x1 = XEXP (x0, 0);
  goto L11878;

 L12582: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12584;
    case UNSPEC_VOLATILE:
      goto L12585;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11878;

 L12584: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L6504;
  x1 = XEXP (x0, 0);
  goto L11878;

 L6504: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6505;
    }
  x1 = XEXP (x0, 0);
  goto L11878;

 L6505: ATTRIBUTE_UNUSED_LABEL
  if (
#line 273 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 568;  /* sse2_movntsi */
    }
  x1 = XEXP (x0, 0);
  goto L11878;

 L12585: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 4)
    goto L8240;
  x1 = XEXP (x0, 0);
  goto L11878;

 L8240: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3825 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 786;  /* sse_stmxcsr */
    }
  x1 = XEXP (x0, 0);
  goto L11878;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L12586;
  x1 = XEXP (x0, 0);
  goto L11888;

 L12586: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12590;
    case FIX:
      goto L6903;
    case ZERO_EXTEND:
      goto L8062;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12590: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L12592;
  x1 = XEXP (x0, 0);
  goto L11888;

 L12592: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 30L:
      goto L6896;
    case 32L:
      goto L8214;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12594;
    case DFmode:
      goto L12595;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12594: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6897;
  x1 = XEXP (x0, 0);
  goto L11888;

 L6897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6898;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6899;
  x1 = XEXP (x0, 0);
  goto L11888;

 L6899: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 988 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 615;  /* sse_cvtss2si */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12595: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7358;
  x1 = XEXP (x0, 0);
  goto L11888;

 L7358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7359;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L7359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7360;
  x1 = XEXP (x0, 0);
  goto L11888;

 L7360: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1946 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 674;  /* sse2_cvtsd2si */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8214: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V4SFmode:
      goto L12596;
    case V2DFmode:
      goto L12597;
    case V16QImode:
      goto L12598;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12596: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8215;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3758 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 781;  /* sse_movmskps */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12597: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L8220;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3767 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 782;  /* sse2_movmskpd */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12598: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L8225;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3776 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 783;  /* sse2_pmovmskb */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L6903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12599;
    case DFmode:
      goto L12600;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12599: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6904;
  x1 = XEXP (x0, 0);
  goto L11888;

 L6904: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6905;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L6905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6906;
  x1 = XEXP (x0, 0);
  goto L11888;

 L6906: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 616;  /* sse_cvttss2si */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L12600: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7365;
  x1 = XEXP (x0, 0);
  goto L11888;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7366;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L7366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7367;
  x1 = XEXP (x0, 0);
  goto L11888;

 L7367: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1971 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 675;  /* sse2_cvttsd2si */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8063;
  x1 = XEXP (x0, 0);
  goto L11888;

 L8063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L8064;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8065;
  x1 = XEXP (x0, 0);
  goto L11888;

 L8065: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (const_0_to_7_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8066;
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8066: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3293 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 765;  /* sse2_pextrw */
    }
  x1 = XEXP (x0, 0);
  goto L11888;

 L8113: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8114;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L8115;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8116;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8116: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3449 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 770;  /* sse2_stored */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11874: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L6791;
  goto L8242;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L6792;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12601;
    case DFmode:
      goto L12602;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12601: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6793;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L6794;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6795;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6796;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6797;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6798;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6799;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6799: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 775 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 601;  /* sse_comi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12602: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7263;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L7264;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7265;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7265: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7266;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7267;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7268;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7269;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7269: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1740 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 660;  /* sse2_comi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11875: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L6802;
  goto L8242;

 L6802: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L6803;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12603;
    case DFmode:
      goto L12604;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12603: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L6804;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L6805;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6806;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6806: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6807;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L6808;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6809;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L6810;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6810: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 789 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 602;  /* sse_ucomi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12604: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L7274;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L7275;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7276;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7276: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7277;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L7278;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L7279;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L7280;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7280: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1754 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 661;  /* sse2_ucomi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11876: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L6838;
    }
 L11882: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L7065;
    }
  goto L8242;

 L6838: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L12605;
  x1 = XEXP (x0, 0);
  goto L11882;

 L12605: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L6839;
    case IOR:
      goto L6852;
    case XOR:
      goto L6858;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L12609;
  x1 = XEXP (x0, 0);
  goto L11882;

 L12609: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L6846;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6840;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6847;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6848;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 891 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 608;  /* *nandsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6841;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6841: ATTRIBUTE_UNUSED_LABEL
  if (
#line 882 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 607;  /* *andsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6853;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6854;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6854: ATTRIBUTE_UNUSED_LABEL
  if (
#line 900 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 609;  /* *iorsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6859;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6860;
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L6860: ATTRIBUTE_UNUSED_LABEL
  if (
#line 909 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 610;  /* *xorsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11882;

 L7065: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L7066;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7067;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L7068;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7068: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1356 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 636;  /* *vec_extractv4sf_0 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11877: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L6871;
    }
  goto L8242;

 L6871: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L12610;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12610: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L6872;
    case UNSPEC:
      goto L12614;
    case FIX:
      goto L7344;
    case VEC_CONCAT:
      goto L8136;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L12615;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12615: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L12617;
    case FIX:
      goto L6881;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12617: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L6873;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6874;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L6875;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6876;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 938 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 612;  /* sse_cvtps2pi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L6882;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L6882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L6883;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6884;
  x1 = XEXP (x0, 0);
  goto L8242;

 L6884: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 949 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 613;  /* sse_cvttps2pi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12614: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L7339;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7339: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7340;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7340: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1898 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 671;  /* sse2_cvtpd2pi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7345;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7345: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1907 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 672;  /* sse2_cvttpd2pi */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8137;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8138;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8138: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3516 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 774;  /* *sse2_concatv2si */
    }
 L8144: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3530 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 775;  /* *sse1_concatv2si */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11880: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L7002;
    }
 L11881: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L7046;
    }
  goto L8242;

 L7002: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L7003;
  x1 = XEXP (x0, 0);
  goto L11881;

 L7003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7004;
    }
  x1 = XEXP (x0, 0);
  goto L11881;

 L7004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L7005;
  x1 = XEXP (x0, 0);
  goto L11881;

 L7005: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12618;
  x1 = XEXP (x0, 0);
  goto L11881;

 L12618: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2L:
        goto L7006;
      case 0L:
        goto L7023;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L11881;

 L7006: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1201 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 627;  /* sse_storehps */
    }
  x1 = XEXP (x0, 0);
  goto L11881;

 L7023: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1229 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 629;  /* sse_storelps */
    }
  x1 = XEXP (x0, 0);
  goto L11881;

 L7046: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode
      && GET_CODE (x1) == VEC_CONCAT)
    goto L7047;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7048;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7049;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1280 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 633;  /* *sse_concatv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11883: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L7308;
    }
 L11884: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L7463;
    }
  goto L8242;

 L7308: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L12620;
  x1 = XEXP (x0, 0);
  goto L11884;

 L12620: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L7309;
    case IOR:
      goto L7322;
    case XOR:
      goto L7328;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L12624;
  x1 = XEXP (x0, 0);
  goto L11884;

 L12624: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7316;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7310;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7317;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7318;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7318: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1856 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 667;  /* *nanddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7311;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1847 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 666;  /* *anddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7323;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7324;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7324: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1865 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 668;  /* *iordf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7329;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7330;
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1874 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 669;  /* *xordf3 */
    }
  x1 = XEXP (x0, 0);
  goto L11884;

 L7463: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L7464;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L7465;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L7466;
  x1 = XEXP (x0, 0);
  goto L8242;

 L7466: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12625;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12625: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1L:
        goto L12627;
      case 0L:
        goto L12628;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12627: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2206 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 687;  /* sse2_storehpd */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L12628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2230 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 688;  /* sse2_storelpd */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11887: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7741;
    }
  goto L8242;

 L7741: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L12629;
  x1 = XEXP (x0, 0);
  goto L8242;

 L12629: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ASHIFT:
      goto L7742;
    case LSHIFTRT:
      goto L7748;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L7743;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_0_to_255_mul_8_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7744;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7744: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2756 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 725;  /* sse2_ashlti3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L7749;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_0_to_255_mul_8_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7750;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L7750: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2780 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 726;  /* sse2_lshrti3 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L11889: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8119;
    }
  goto L8242;

 L8119: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8120;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L8121;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8122;
  x1 = XEXP (x0, 0);
  goto L8242;

 L8122: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3472 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 771;  /* *sse2_storeq */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L8243: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L12631;
  x1 = XEXP (x0, 0);
  goto L8266;

 L12631: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L12634;
  x1 = XEXP (x0, 0);
  goto L8266;

 L12634: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L12637;
  x1 = XEXP (x0, 0);
  goto L8266;

 L12637: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 37L:
      goto L8244;
    case 44L:
      goto L8251;
    case 45L:
      goto L8255;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8244: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3842 "../../gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 787;  /* *sse_sfence */
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8251: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3867 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 789;  /* *sse2_mfence */
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L8255: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3884 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 790;  /* *sse2_lfence */
    }
  x1 = XEXP (x0, 0);
  goto L8266;

 L11904: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L9040;
 L11891: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L8267;
    }
 L11899: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L8470;
    }
  goto ret0;

 L9040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9041;
    }
  goto L11891;

 L9041: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L9042;
  x1 = XEXP (x0, 0);
  goto L11891;

 L9042: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L9043;
    }
  x1 = XEXP (x0, 0);
  goto L11891;

 L9043: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L9044;
    }
  x1 = XEXP (x0, 0);
  goto L11891;

 L9044: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == MEM)
    goto L9045;
  x1 = XEXP (x0, 0);
  goto L11891;

 L9045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1371 "../../gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT))
    {
      return 897;  /* *mmx_maskmovq */
    }
  x1 = XEXP (x0, 0);
  goto L11891;

 L8267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L8268;
    }
  x1 = XEXP (x0, 0);
  goto L11899;

 L8268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 793;  /* *movv8qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11899;

 L8470: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L12640;
  goto ret0;

 L12640: ATTRIBUTE_UNUSED_LABEL
  return recog_13 (x0, insn, pnum_clobbers);

 L11892: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L8271;
    }
 L11900: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L8476;
    }
  goto ret0;

 L8271: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L8272;
    }
  x1 = XEXP (x0, 0);
  goto L11900;

 L8272: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 794;  /* *movv4hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11900;

 L8476: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L12662;
  goto ret0;

 L12662: ATTRIBUTE_UNUSED_LABEL
  return recog_14 (x0, insn, pnum_clobbers);

 L11893: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L8275;
    }
 L11897: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L8398;
    }
  goto ret0;

 L8275: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L8276;
    }
  x1 = XEXP (x0, 0);
  goto L11897;

 L8276: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 795;  /* *movv2si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11897;

 L8398: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L12696;
  goto ret0;

 L12696: ATTRIBUTE_UNUSED_LABEL
  return recog_15 (x0, insn, pnum_clobbers);

 L11894: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L8279;
    }
 L11896: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L8288;
    }
  goto ret0;

 L8279: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L8280;
    }
  x1 = XEXP (x0, 0);
  goto L11896;

 L8280: ATTRIBUTE_UNUSED_LABEL
  if (
#line 154 "../../gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 796;  /* *movv2sf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L11896;

 L8288: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L12724;
  goto ret0;

 L12724: ATTRIBUTE_UNUSED_LABEL
  return recog_16 (x0, insn, pnum_clobbers);

 L11895: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8283;
    }
 L11901: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8488;
    }
  goto ret0;

 L8283: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L8284;
  x1 = XEXP (x0, 0);
  goto L11901;

 L8284: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8285;
    }
  x1 = XEXP (x0, 0);
  goto L11901;

 L8285: ATTRIBUTE_UNUSED_LABEL
  if (
#line 203 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 797;  /* sse_movntdi */
    }
  x1 = XEXP (x0, 0);
  goto L11901;

 L8488: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L12754;
  goto ret0;

 L12754: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L12757;
    case MULT:
      goto L8640;
    default:
     break;
   }
  goto ret0;

 L12757: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L12759;
    case 2:
      goto L12760;
    default:
      break;
    }
  goto ret0;

 L12759: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 38)
    goto L8489;
  goto ret0;

 L8489: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L12761;
  goto ret0;

 L12761: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L8490;
    case MINUS:
      goto L8539;
    case LSHIFTRT:
      goto L8702;
    case ASHIFT:
      goto L8721;
    default:
     break;
   }
  goto ret0;

 L8490: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8491;
    }
  goto ret0;

 L8491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8492;
    }
  goto ret0;

 L8492: ATTRIBUTE_UNUSED_LABEL
  if (
#line 576 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 826;  /* mmx_adddi3 */
    }
  goto ret0;

 L8539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8540;
    }
  goto ret0;

 L8540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8541;
    }
  goto ret0;

 L8541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 617 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 834;  /* mmx_subdi3 */
    }
  goto ret0;

 L8702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8703;
    }
  goto ret0;

 L8703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8704;
    }
  goto ret0;

 L8704: ATTRIBUTE_UNUSED_LABEL
  if (
#line 804 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 853;  /* mmx_lshrdi3 */
    }
  goto ret0;

 L8721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8722;
    }
  goto ret0;

 L8722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8723;
    }
  goto ret0;

 L8723: ATTRIBUTE_UNUSED_LABEL
  if (
#line 825 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 856;  /* mmx_ashldi3 */
    }
  goto ret0;

 L12760: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 46)
    goto L9030;
  goto ret0;

 L9030: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L9031;
    }
  goto ret0;

 L9031: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L9032;
    }
  goto ret0;

 L9032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1342 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 895;  /* mmx_psadbw */
    }
  goto ret0;

 L8640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L8641;
  goto ret0;

 L8641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8642;
  goto ret0;

 L8642: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8643;
    }
  goto ret0;

 L8643: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8644;
  goto ret0;

 L8644: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8645;
  goto ret0;

 L8645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L8646;
  goto ret0;

 L8646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8647;
  goto ret0;

 L8647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8648;
    }
  goto ret0;

 L8648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8649;
  goto ret0;

 L8649: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 733 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)))
    {
      return 844;  /* sse2_umulsidi3 */
    }
  goto ret0;

 L11898: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L8458;
    }
  goto ret0;

 L8458: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8459;
  goto ret0;

 L8459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8460;
    }
  goto ret0;

 L8460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8461;
  goto ret0;

 L8461: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12765;
  goto ret0;

 L12765: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L12767;
      case 1L:
        goto L12768;
      default:
        break;
      }
  goto ret0;

 L12767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 821;  /* *vec_extractv2sf_0 */
    }
  goto ret0;

 L12768: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 822;  /* *vec_extractv2sf_1 */
    }
  goto ret0;

 L11902: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8939;
    }
 L11903: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8981;
    }
 L11907: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L9379;
    }
  goto ret0;

 L8939: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L12769;
  x1 = XEXP (x0, 0);
  goto L11903;

 L12769: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L8940;
    case UNSPEC:
      goto L12771;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11903;

 L8940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8941;
  x1 = XEXP (x0, 0);
  goto L11903;

 L8941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8942;
    }
  x1 = XEXP (x0, 0);
  goto L11903;

 L8942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8943;
  x1 = XEXP (x0, 0);
  goto L11903;

 L8943: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (const_0_to_3_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8944;
    }
  x1 = XEXP (x0, 0);
  goto L11903;

 L8944: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1061 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 885;  /* mmx_pextrw */
    }
  x1 = XEXP (x0, 0);
  goto L11903;

 L12771: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 32)
    goto L9036;
  x1 = XEXP (x0, 0);
  goto L11903;

 L9036: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L9037;
    }
  x1 = XEXP (x0, 0);
  goto L11903;

 L9037: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1351 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 896;  /* mmx_pmovmskb */
    }
  x1 = XEXP (x0, 0);
  goto L11903;

 L8981: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L8982;
  x1 = XEXP (x0, 0);
  goto L11907;

 L8982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8983;
    }
  x1 = XEXP (x0, 0);
  goto L11907;

 L8983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8984;
  x1 = XEXP (x0, 0);
  goto L11907;

 L8984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L12772;
  x1 = XEXP (x0, 0);
  goto L11907;

 L12772: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L12774;
      case 1L:
        goto L12775;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L11907;

 L12774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1160 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 891;  /* *vec_extractv2si_0 */
    }
  x1 = XEXP (x0, 0);
  goto L11907;

 L12775: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1179 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 892;  /* *vec_extractv2si_1 */
    }
  x1 = XEXP (x0, 0);
  goto L11907;

 L9379: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L9380;
  goto ret0;

 L9380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L12776;
  goto ret0;

 L12776: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9381;
    case MINUS:
      goto L9429;
    case IOR:
      goto L9477;
    case AND:
      goto L9525;
    case XOR:
      goto L9573;
    default:
     break;
   }
  goto ret0;

 L9381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9382;
  goto ret0;

 L9382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9383;
    }
  goto ret0;

 L9383: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 914;  /* sync_addsi */
    }
  goto ret0;

 L9429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9430;
  goto ret0;

 L9430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9431;
    }
  goto ret0;

 L9431: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 917;  /* sync_subsi */
    }
  goto ret0;

 L9477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9478;
  goto ret0;

 L9478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9479;
    }
  goto ret0;

 L9479: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 920;  /* sync_iorsi */
    }
  goto ret0;

 L9525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9526;
  goto ret0;

 L9526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9527;
    }
  goto ret0;

 L9527: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 923;  /* sync_andsi */
    }
  goto ret0;

 L9573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9574;
  goto ret0;

 L9574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9575;
    }
  goto ret0;

 L9575: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 926;  /* sync_xorsi */
    }
  goto ret0;

 L11905: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L9347;
    }
  goto ret0;

 L9347: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L9348;
  goto ret0;

 L9348: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == QImode)
    goto L12781;
  goto ret0;

 L12781: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9349;
    case MINUS:
      goto L9397;
    case IOR:
      goto L9445;
    case AND:
      goto L9493;
    case XOR:
      goto L9541;
    default:
     break;
   }
  goto ret0;

 L9349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9350;
  goto ret0;

 L9350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9351;
    }
  goto ret0;

 L9351: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 912;  /* sync_addqi */
    }
  goto ret0;

 L9397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9398;
  goto ret0;

 L9398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9399;
    }
  goto ret0;

 L9399: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 915;  /* sync_subqi */
    }
  goto ret0;

 L9445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9446;
  goto ret0;

 L9446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9447;
    }
  goto ret0;

 L9447: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 918;  /* sync_iorqi */
    }
  goto ret0;

 L9493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9494;
  goto ret0;

 L9494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9495;
    }
  goto ret0;

 L9495: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 921;  /* sync_andqi */
    }
  goto ret0;

 L9541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9542;
  goto ret0;

 L9542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9543;
    }
  goto ret0;

 L9543: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 924;  /* sync_xorqi */
    }
  goto ret0;

 L11906: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L9363;
    }
  goto ret0;

 L9363: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L9364;
  goto ret0;

 L9364: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode)
    goto L12786;
  goto ret0;

 L12786: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9365;
    case MINUS:
      goto L9413;
    case IOR:
      goto L9461;
    case AND:
      goto L9509;
    case XOR:
      goto L9557;
    default:
     break;
   }
  goto ret0;

 L9365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9366;
  goto ret0;

 L9366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9367;
    }
  goto ret0;

 L9367: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 913;  /* sync_addhi */
    }
  goto ret0;

 L9413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9414;
  goto ret0;

 L9414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9415;
    }
  goto ret0;

 L9415: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 916;  /* sync_subhi */
    }
  goto ret0;

 L9461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9462;
  goto ret0;

 L9462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9463;
    }
  goto ret0;

 L9463: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 919;  /* sync_iorhi */
    }
  goto ret0;

 L9509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9510;
  goto ret0;

 L9510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9511;
    }
  goto ret0;

 L9511: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 922;  /* sync_andhi */
    }
  goto ret0;

 L9557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L9558;
  goto ret0;

 L9558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9559;
    }
  goto ret0;

 L9559: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 925;  /* sync_xorhi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L221;
    case FIX:
      goto L772;
    case PLUS:
      goto L1050;
    case MINUS:
      goto L1501;
    case AND:
      goto L2093;
    case IOR:
      goto L2324;
    case XOR:
      goto L2574;
    case NEG:
      goto L2858;
    case ASHIFT:
      goto L3251;
    case ASHIFTRT:
      goto L3453;
    case LSHIFTRT:
      goto L3783;
    case ROTATE:
      goto L4101;
    case ROTATERT:
      goto L4233;
    case UNSPEC:
      goto L12848;
    default:
     break;
   }
  goto ret0;

 L221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L222;
  goto ret0;

 L222: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L223;
  goto ret0;

 L223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L224;
  goto ret0;

 L224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L225;
  goto ret0;

 L225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L226;
  goto ret0;

 L226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    {
      return 31;  /* popsi1 */
    }
  goto ret0;

 L772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L773;
    }
  goto ret0;

 L773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L774;
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12850;
    case CCmode:
      goto L12851;
    default:
      break;
    }
  goto ret0;

 L12850: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L775;
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 112;  /* fix_truncsi_i387_fisttp_with_temp */
    }
  goto ret0;

 L12851: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 115;  /* *fix_truncsi_i387_1 */
    }
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12852;
  goto ret0;

 L12852: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1051;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1120;
    }
  goto ret0;

 L1051: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L1052;
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1053;
    }
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1054;
    }
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4836 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 141;  /* addsi3_carry */
    }
  goto ret0;

 L1120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1121;
    }
  goto ret0;

 L1121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1122;
  goto ret0;

 L1122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 5350 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 148;  /* *addsi_1 */
    }
  goto ret0;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1502;
    }
  goto ret0;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1503;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1521;
    }
  goto ret0;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L1504;
    }
  goto ret0;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1505;
    }
  goto ret0;

 L1505: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1506;
  goto ret0;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6589 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 171;  /* subsi3_carry */
    }
  goto ret0;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1522;
  goto ret0;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6621 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 172;  /* *subsi_1 */
    }
  goto ret0;

 L2093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2094;
    }
  goto ret0;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2095;
    }
  goto ret0;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2096;
  goto ret0;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8082 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 208;  /* *andsi_1 */
    }
  goto ret0;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12855;
  goto ret0;

 L12855: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L3227;
    case ASHIFTRT:
      goto L3429;
    case REG:
    case SUBREG:
    case MEM:
      goto L12854;
    default:
      goto ret0;
   }
 L12854: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2325;
    }
  goto ret0;

 L3227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3228;
  goto ret0;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3229;
    }
  goto ret0;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L3230;
  goto ret0;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3231;
    }
  goto ret0;

 L3231: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L3232;
  goto ret0;

 L3232: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L3233;
  goto ret0;

 L3233: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L3234;
  goto ret0;

 L3234: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3235;
  goto ret0;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 287;  /* x86_shld_1 */
    }
  goto ret0;

 L3429: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L3430;
  goto ret0;

 L3430: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3431;
    }
  goto ret0;

 L3431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L3432;
  goto ret0;

 L3432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3433;
    }
  goto ret0;

 L3433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L3434;
  goto ret0;

 L3434: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L3435;
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L3436;
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3437;
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 300;  /* x86_shrd_1 */
    }
  goto ret0;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2326;
    }
  goto ret0;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2327;
  goto ret0;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8537 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 221;  /* *iorsi_1 */
    }
  goto ret0;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2575;
    }
  goto ret0;

 L2575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2576;
    }
  goto ret0;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2577;
  goto ret0;

 L2577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8913 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 235;  /* *xorsi_1 */
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2859;
    }
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2860;
  goto ret0;

 L2860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9398 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 251;  /* *negsi2_1 */
    }
  goto ret0;

 L3251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3252;
    }
  goto ret0;

 L3252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3253;
    }
  goto ret0;

 L3253: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3254;
  goto ret0;

 L3254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10538 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 288;  /* *ashlsi3_1 */
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3454;
    }
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L12857;
 L3482: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3483;
    }
  goto ret0;

 L12857: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3455;
    }
 L12858: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3469;
    }
  goto L3482;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3456;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L12858;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11403 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 301;  /* ashrsi3_31 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L12858;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3470;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3482;

 L3470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11444 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 302;  /* *ashrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3482;

 L3483: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3484;
  goto ret0;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11469 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 303;  /* *ashrsi3_1 */
    }
  goto ret0;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3784;
    }
  goto ret0;

 L3784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3785;
    }
 L3798: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3799;
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3798;

 L3786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12011 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 323;  /* *lshrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3798;

 L3799: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3800;
  goto ret0;

 L3800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12036 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 324;  /* *lshrsi3_1 */
    }
  goto ret0;

 L4101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4102;
    }
  goto ret0;

 L4102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4103;
    }
 L4116: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4117;
    }
  goto ret0;

 L4103: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4104;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4116;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12460 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 344;  /* *rotlsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4116;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4118;
  goto ret0;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12486 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 345;  /* *rotlsi3_1 */
    }
  goto ret0;

 L4233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4234;
    }
  goto ret0;

 L4234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4235;
    }
 L4248: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4249;
    }
  goto ret0;

 L4235: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4236;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4248;

 L4236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12684 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 353;  /* *rotrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4248;

 L4249: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4250;
  goto ret0;

 L4250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 354;  /* *rotrsi3_1 */
    }
  goto ret0;

 L12848: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L12859;
  goto ret0;

 L12859: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5616;
    case 75L:
      goto L5766;
    default:
      break;
    }
  goto ret0;

 L5616: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5617;
    }
  goto ret0;

 L5617: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5618;
  goto ret0;

 L5618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 490;  /* *fistsi2_floor_1 */
    }
  goto ret0;

 L5766: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5767;
    }
  goto ret0;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5768;
  goto ret0;

 L5768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 501;  /* *fistsi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L12822;
    case ZERO_EXTRACT:
      goto L1393;
    default:
     break;
   }
 L12792: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L220;
    }
 L12793: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L254;
    }
 L12803: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L717;
    }
  goto ret0;

 L12822: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L200;
    }
  goto L12792;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_no_elim_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L201;
    }
  x2 = XEXP (x1, 0);
  goto L12792;

 L201: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L202;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12792;

 L202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12792;

 L203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 29;  /* *pushsi2_prologue */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12792;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1394;
    }
  goto ret0;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1395;
  goto ret0;

 L1395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1396;
  goto ret0;

 L1396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L12823;
  goto ret0;

 L12823: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1397;
    case AND:
      goto L2220;
    case IOR:
      goto L2492;
    case XOR:
      goto L2697;
    default:
     break;
   }
  goto ret0;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1398;
  goto ret0;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1399;
    }
  goto ret0;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1400;
  goto ret0;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1427;
  goto ret0;

 L1427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1428;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1402;
    }
  goto ret0;

 L1428: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1429;
    }
  goto ret0;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1430;
  goto ret0;

 L1430: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1431;
  goto ret0;

 L1431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1432;
  goto ret0;

 L1432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 167;  /* *addqi_ext_2 */
    }
  goto ret0;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1403;
  goto ret0;

 L1403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 166;  /* addqi_ext_1 */
    }
  goto ret0;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2221;
  goto ret0;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2222;
    }
  goto ret0;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2223;
  goto ret0;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2272;
  goto ret0;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L12827;
 L2224: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2225;
    }
  goto ret0;

 L12827: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2273;
    case ZERO_EXTRACT:
      goto L2301;
    default:
     break;
   }
  goto L2224;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2274;
    }
  goto L2224;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2275;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2224;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 219;  /* *andqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2224;

 L2301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2302;
    }
  goto L2224;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2303;
  goto L2224;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2304;
  goto L2224;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2224;

 L2305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 220;  /* *andqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2224;

 L2225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2226;
  goto ret0;

 L2226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 217;  /* andqi_ext_0 */
    }
  goto ret0;

 L2492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2493;
  goto ret0;

 L2493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2494;
    }
  goto ret0;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2495;
  goto ret0;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2522;
  goto ret0;

 L2522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L12829;
 L2496: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2497;
    }
  goto ret0;

 L12829: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2523;
    case ZERO_EXTRACT:
      goto L2551;
    default:
     break;
   }
  goto L2496;

 L2523: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2524;
    }
  goto L2496;

 L2524: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2525;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2496;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8761 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 233;  /* *iorqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2496;

 L2551: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2552;
    }
  goto L2496;

 L2552: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2553;
  goto L2496;

 L2553: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2554;
  goto L2496;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2555;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2496;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8799 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 234;  /* *iorqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2496;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2498;
  goto ret0;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8743 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 232;  /* iorqi_ext_0 */
    }
  goto ret0;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2698;
  goto ret0;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2699;
    }
  goto ret0;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2700;
  goto ret0;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2727;
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L12831;
 L2701: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2702;
    }
  goto ret0;

 L12831: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2728;
    case ZERO_EXTRACT:
      goto L2756;
    default:
     break;
   }
  goto L2701;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2729;
    }
  goto L2701;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2730;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2701;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9099 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 244;  /* *xorqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2701;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2757;
    }
  goto L2701;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2758;
  goto L2701;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2759;
  goto L2701;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2760;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2701;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9137 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 245;  /* *xorqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2701;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2703;
  goto ret0;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9081 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 243;  /* xorqi_ext_0 */
    }
  goto ret0;

 L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L12833;
  x2 = XEXP (x1, 0);
  goto L12793;

 L12833: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L12793;

 L254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L12862;
 L230: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L231;
    }
 L240: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L241;
    }
  x2 = XEXP (x1, 0);
  goto L12803;

 L12862: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L454;
    case MULT:
      goto L1649;
    case DIV:
      goto L1854;
    case UDIV:
      goto L1955;
    case UNSPEC:
      goto L12872;
    case CTZ:
      goto L4853;
    case MINUS:
      goto L4865;
    case PLUS:
      goto L4987;
    case IF_THEN_ELSE:
      goto L6183;
    case REG:
    case SUBREG:
      goto L12861;
    default:
      goto L230;
   }
 L12861: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L255;
    }
  goto L230;

 L454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12874;
    case QImode:
      goto L12875;
    default:
      break;
    }
  goto L230;

 L12874: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L455;
    }
  goto L230;

 L455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L456;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 2984 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 71;  /* zero_extendhisi2_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L12875: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L501;
    }
  goto L230;

 L501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L12876: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12878;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L12878: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12880;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L12880: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3088 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 76;  /* *zero_extendqisi2_and */
    }
 L12881: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3097 "../../gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 77;  /* *zero_extendqisi2_movzbw_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1650;
    }
  goto L230;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1651;
    }
  goto L230;

 L1651: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6862 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 182;  /* *mulsi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1855;
    }
  goto L230;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1856;
    }
  goto L230;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1857;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1858;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1859;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7468 "../../gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 193;  /* *divmodsi4_nocltd */
    }
 L1884: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7479 "../../gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 194;  /* *divmodsi4_cltd */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1956;
    }
  goto L230;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1957;
    }
  goto L230;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1959;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1961;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L1961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 197;  /* udivmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L12872: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L12882;
  goto L230;

 L12882: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 12L:
      goto L4787;
    case 66L:
      goto L5574;
    default:
      break;
    }
  goto L230;

 L4787: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4788;
  goto L230;

 L4788: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4789;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 395;  /* set_got */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5575;
    }
  goto L230;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L5576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5577;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L5577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17025 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 486;  /* fistsi2_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4854;
    }
  goto L230;

 L4854: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4855;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 401;  /* ctzsi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (31)])
    goto L4866;
  goto L230;

 L4866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == CLZ)
    goto L4867;
  goto L230;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4868;
    }
  goto L230;

 L4868: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4869;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 402;  /* *bsr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 16)
    goto L4988;
  goto L230;

 L4988: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4989;
  goto L230;

 L4989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4990;
    }
  goto L230;

 L4990: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4991;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L4991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 409;  /* *add_tp_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L6183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L6184;
    }
  goto L230;

 L6184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L6185;
  goto L230;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6186;
  goto L230;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6187;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L6187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 527;  /* x86_movsicc_0_m1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L255: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L256;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L257;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 35;  /* *swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L230;

 L231: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L232;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L240;

 L232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1130 "../../gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 32;  /* *movsi_xor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L240;

 L241: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12803;

 L242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1140 "../../gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size)))
    {
      return 33;  /* *movsi_or */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12803;

 L717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L718;
  goto ret0;

 L718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L719;
    }
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L720;
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L721;
    }
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 109;  /* fix_truncsi_i387_fisttp */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_20 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L754;
    case PLUS:
      goto L1032;
    case MINUS:
      goto L1483;
    case AND:
      goto L2120;
    case IOR:
      goto L2369;
    case XOR:
      goto L2619;
    case NEG:
      goto L2881;
    case ASHIFT:
      goto L3296;
    case ASHIFTRT:
      goto L3557;
    case LSHIFTRT:
      goto L3873;
    case ROTATE:
      goto L4129;
    case ROTATERT:
      goto L4261;
    case UNSPEC:
      goto L12913;
    default:
     break;
   }
  goto ret0;

 L754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L755;
    }
  goto ret0;

 L755: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L756;
  goto ret0;

 L756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L12915;
    case CCmode:
      goto L12916;
    default:
      break;
    }
  goto ret0;

 L12915: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L757;
    }
  goto ret0;

 L757: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 111;  /* fix_trunchi_i387_fisttp_with_temp */
    }
  goto ret0;

 L12916: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 114;  /* *fix_trunchi_i387_1 */
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L12917;
  goto ret0;

 L12917: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1033;
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1197;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, HImode))
    {
      operands[3] = x4;
      goto L1034;
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1035;
    }
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1036;
    }
  goto ret0;

 L1036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1037;
  goto ret0;

 L1037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4824 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 140;  /* addhi3_carry */
    }
  goto ret0;

 L1197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1198;
    }
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1199;
  goto ret0;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12919;
  goto ret0;

 L12919: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12921;
  goto ret0;

 L12921: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12923;
  goto ret0;

 L12923: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5783 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 153;  /* *addhi_1_lea */
    }
 L12924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5826 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 154;  /* *addhi_1 */
    }
  goto ret0;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1484;
    }
  goto ret0;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L1485;
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1559;
    }
  goto ret0;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, HImode))
    {
      operands[3] = x4;
      goto L1486;
    }
  goto ret0;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1487;
    }
  goto ret0;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1488;
  goto ret0;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6577 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 170;  /* subhi3_carry */
    }
  goto ret0;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1560;
  goto ret0;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6706 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 175;  /* *subhi_1 */
    }
  goto ret0;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2121;
    }
  goto ret0;

 L2121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2122;
    }
  goto ret0;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2123;
  goto ret0;

 L2123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8204 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 210;  /* *andhi_1 */
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2370;
    }
  goto ret0;

 L2370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2371;
    }
  goto ret0;

 L2371: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2372;
  goto ret0;

 L2372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8630 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 224;  /* *iorhi_1 */
    }
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2620;
    }
  goto ret0;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2621;
    }
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2622;
  goto ret0;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9007 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 238;  /* *xorhi_1 */
    }
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2882;
    }
  goto ret0;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2883;
  goto ret0;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9458 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 253;  /* *neghi2_1 */
    }
  goto ret0;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3297;
    }
  goto ret0;

 L3297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3298;
    }
  goto ret0;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3299;
  goto ret0;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12925;
  goto ret0;

 L12925: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12927;
  goto ret0;

 L12927: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12929;
  goto ret0;

 L12929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10797 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 291;  /* *ashlhi3_1_lea */
    }
 L12930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10835 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 292;  /* *ashlhi3_1 */
    }
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3558;
    }
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3559;
    }
 L3572: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3573;
    }
  goto ret0;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3560;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3572;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11595 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 308;  /* *ashrhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3572;

 L3573: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3574;
  goto ret0;

 L3574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11609 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 309;  /* *ashrhi3_1 */
    }
  goto ret0;

 L3873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3874;
    }
  goto ret0;

 L3874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3875;
    }
 L3888: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3889;
    }
  goto ret0;

 L3875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3888;

 L3876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12163 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 329;  /* *lshrhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3888;

 L3889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3890;
  goto ret0;

 L3890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12177 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 330;  /* *lshrhi3_1 */
    }
  goto ret0;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4130;
    }
  goto ret0;

 L4130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4131;
    }
 L4144: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4145;
    }
  goto ret0;

 L4131: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4132;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4144;

 L4132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12519 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 346;  /* *rotlhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4144;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4146;
  goto ret0;

 L4146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12533 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)))
    {
      return 347;  /* *rotlhi3_1 */
    }
  goto ret0;

 L4261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4262;
    }
  goto ret0;

 L4262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4263;
    }
 L4276: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4277;
    }
  goto ret0;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4264;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4276;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12746 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 355;  /* *rotrhi3_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4276;

 L4277: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4278;
  goto ret0;

 L4278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12760 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)))
    {
      return 356;  /* *rotrhi3 */
    }
  goto ret0;

 L12913: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L12931;
  goto ret0;

 L12931: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5604;
    case 75L:
      goto L5754;
    default:
      break;
    }
  goto ret0;

 L5604: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5605;
    }
  goto ret0;

 L5605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5606;
  goto ret0;

 L5606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 489;  /* *fisthi2_floor_1 */
    }
  goto ret0;

 L5754: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5755;
    }
  goto ret0;

 L5755: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5756;
  goto ret0;

 L5756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 500;  /* *fisthi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_21 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L306;
    }
 L12806: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1013;
    }
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L12934;
  x2 = XEXP (x1, 0);
  goto L12806;

 L12934: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L1677;
    case DIV:
      goto L1813;
    case UDIV:
      goto L1827;
    case REG:
    case SUBREG:
      goto L12933;
    default:
      x2 = XEXP (x1, 0);
      goto L12806;
   }
 L12933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L307;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1678;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1679;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1680;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6946 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 184;  /* *mulqi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1814;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1815;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1816;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7325 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH))
    {
      return 191;  /* divqi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1828;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1829;
    }
  x2 = XEXP (x1, 0);
  goto L12806;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1830;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7335 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH))
    {
      return 192;  /* udivqi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L307: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L308;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L309;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1546 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
    {
      return 44;  /* *swapqi_1 */
    }
 L316: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1558 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL))
    {
      return 45;  /* *swapqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12806;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L12937;
  goto ret0;

 L12937: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1014;
    case MINUS:
      goto L1465;
    case AND:
      goto L2147;
    case IOR:
      goto L2414;
    case XOR:
      goto L2664;
    case NEG:
      goto L2904;
    case ASHIFT:
      goto L3355;
    case ASHIFTRT:
      goto L3647;
    case LSHIFTRT:
      goto L3963;
    case ROTATE:
      goto L4173;
    case ROTATERT:
      goto L4289;
    default:
     break;
   }
  goto ret0;

 L1014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L12948;
  goto ret0;

 L12948: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1015;
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1288;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, QImode))
    {
      operands[3] = x4;
      goto L1016;
    }
  goto ret0;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1017;
    }
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1018;
    }
  goto ret0;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1019;
  goto ret0;

 L1019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4812 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 139;  /* addqi3_carry */
    }
  goto ret0;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1289;
    }
  goto ret0;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1290;
  goto ret0;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12950;
  goto ret0;

 L12950: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12952;
  goto ret0;

 L12952: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12954;
  goto ret0;

 L12954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6035 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 159;  /* *addqi_1_lea */
    }
 L12955: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6085 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 160;  /* *addqi_1 */
    }
  goto ret0;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1466;
    }
  goto ret0;

 L1466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == PLUS)
    goto L1467;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1597;
    }
  goto ret0;

 L1467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, QImode))
    {
      operands[3] = x4;
      goto L1468;
    }
  goto ret0;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1469;
    }
  goto ret0;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1470;
  goto ret0;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6565 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 169;  /* subqi3_carry */
    }
  goto ret0;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1598;
  goto ret0;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6750 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 178;  /* *subqi_1 */
    }
  goto ret0;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2148;
    }
  goto ret0;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2149;
    }
  goto ret0;

 L2149: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2150;
  goto ret0;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8250 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 212;  /* *andqi_1 */
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2415;
    }
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2416;
    }
  goto ret0;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2417;
  goto ret0;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8674 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 227;  /* *iorqi_1 */
    }
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2665;
    }
  goto ret0;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2666;
    }
  goto ret0;

 L2666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2667;
  goto ret0;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9051 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 241;  /* *xorqi_1 */
    }
  goto ret0;

 L2904: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2905;
    }
  goto ret0;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2906;
  goto ret0;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9485 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 255;  /* *negqi2_1 */
    }
  goto ret0;

 L3355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3356;
    }
  goto ret0;

 L3356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3357;
    }
  goto ret0;

 L3357: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3358;
  goto ret0;

 L3358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12956;
  goto ret0;

 L12956: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12958;
  goto ret0;

 L12958: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12960;
  goto ret0;

 L12960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10955 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 295;  /* *ashlqi3_1_lea */
    }
 L12961: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11011 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 296;  /* *ashlqi3_1 */
    }
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3648;
    }
  goto ret0;

 L3648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3649;
    }
 L3678: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3679;
    }
  goto ret0;

 L3649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3678;

 L3650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11694 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 314;  /* *ashrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3678;

 L3679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3680;
  goto ret0;

 L3680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11723 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 316;  /* *ashrqi3_1 */
    }
  goto ret0;

 L3963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3964;
    }
  goto ret0;

 L3964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3965;
    }
 L3994: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3995;
    }
  goto ret0;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3966;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3994;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12262 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 335;  /* *lshrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3994;

 L3995: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3996;
  goto ret0;

 L3996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12290 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 337;  /* *lshrqi3_1 */
    }
  goto ret0;

 L4173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4174;
    }
  goto ret0;

 L4174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4175;
    }
 L4204: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4205;
    }
  goto ret0;

 L4175: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4176;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4204;

 L4176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12567 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 349;  /* *rotlqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4204;

 L4205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4206;
  goto ret0;

 L4206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)))
    {
      return 351;  /* *rotlqi3_1 */
    }
  goto ret0;

 L4289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4290;
    }
  goto ret0;

 L4290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4291;
    }
 L4320: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4321;
    }
  goto ret0;

 L4291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4320;

 L4292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12780 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 357;  /* *rotrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4320;

 L4321: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4322;
  goto ret0;

 L4322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12808 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)))
    {
      return 359;  /* *rotrqi3_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_22 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1134;
    case NEG:
      goto L1147;
    case MINUS:
      goto L1534;
    case AND:
      goto L2108;
    case IOR:
      goto L2339;
    case XOR:
      goto L2589;
    case NOT:
      goto L3170;
    case ASHIFT:
      goto L3266;
    case ASHIFTRT:
      goto L3496;
    case LSHIFTRT:
      goto L3812;
    case REG:
    case SUBREG:
    case MEM:
      goto L13073;
    default:
      goto ret0;
   }
 L13073: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1164;
    }
  goto ret0;

 L1134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1135;
    }
  goto ret0;

 L1135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1136;
    }
  goto ret0;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1137;
  goto ret0;

 L1137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1138;
    case CLOBBER:
      goto L1183;
    default:
     break;
   }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1139;
    }
  goto ret0;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1140;
  goto ret0;

 L1140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1141;
  goto ret0;

 L1141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5502 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 149;  /* *addsi_2 */
    }
  goto ret0;

 L1183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1184;
    }
  goto ret0;

 L1184: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5727 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 152;  /* *addsi_5 */
    }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1148;
    }
  goto ret0;

 L1148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1149;
    }
  goto ret0;

 L1149: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1150;
  goto ret0;

 L1150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1151;
    }
  goto ret0;

 L1151: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5592 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 150;  /* *addsi_3 */
    }
  goto ret0;

 L1534: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1535;
    }
  goto ret0;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1536;
    }
  goto ret0;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1537;
  goto ret0;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1538;
  goto ret0;

 L1538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1539;
    }
  goto ret0;

 L1539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L1540;
  goto ret0;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1541;
  goto ret0;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6645 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 173;  /* *subsi_2 */
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L13105;
  goto ret0;

 L13105: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L2245;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2109;
    }
  goto ret0;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L2246;
    }
  goto ret0;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2247;
  goto ret0;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2248;
  goto ret0;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2249;
    }
  goto ret0;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2250;
  goto ret0;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2251;
  goto ret0;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2252;
  goto ret0;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2253;
    }
  goto ret0;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2254;
  goto ret0;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2255;
  goto ret0;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2256;
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2257;
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2258;
  goto ret0;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2259;
  goto ret0;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2260;
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8365 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 218;  /* *andqi_ext_0_cc */
    }
  goto ret0;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2110;
    }
  goto ret0;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2111;
  goto ret0;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2112;
  goto ret0;

 L2112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2113;
    }
  goto ret0;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2114;
  goto ret0;

 L2114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2115;
  goto ret0;

 L2115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8171 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 209;  /* *andsi_2 */
    }
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2340;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2341;
    }
  goto ret0;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2342;
  goto ret0;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2343;
    case CLOBBER:
      goto L2356;
    default:
     break;
   }
  goto ret0;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2344;
    }
  goto ret0;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L2345;
  goto ret0;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2346;
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8571 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 222;  /* *iorsi_2 */
    }
  goto ret0;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2357;
    }
  goto ret0;

 L2357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8611 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 223;  /* *iorsi_3 */
    }
  goto ret0;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L13107;
  goto ret0;

 L13107: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L2826;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2590;
    }
  goto ret0;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L2827;
    }
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2828;
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2829;
  goto ret0;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2830;
    }
  goto ret0;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2831;
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2832;
  goto ret0;

 L2832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2833;
  goto ret0;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2834;
    }
  goto ret0;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2835;
  goto ret0;

 L2835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2836;
  goto ret0;

 L2836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2837;
  goto ret0;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L2838;
  goto ret0;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2839;
  goto ret0;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2840;
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L2841;
  goto ret0;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9200 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 249;  /* *xorqi_cc_ext_1 */
    }
  goto ret0;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2591;
    }
  goto ret0;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2592;
  goto ret0;

 L2592: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2593;
    case CLOBBER:
      goto L2606;
    default:
     break;
   }
  goto ret0;

 L2593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2594;
    }
  goto ret0;

 L2594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2595;
  goto ret0;

 L2595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2596;
  goto ret0;

 L2596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8948 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 236;  /* *xorsi_2 */
    }
  goto ret0;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2607;
    }
  goto ret0;

 L2607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8988 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 237;  /* *xorsi_3 */
    }
  goto ret0;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3171;
    }
  goto ret0;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3172;
  goto ret0;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3173;
  goto ret0;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3174;
    }
  goto ret0;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3175;
  goto ret0;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10048 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 281;  /* *one_cmplsi2_2 */
    }
  goto ret0;

 L3266: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3267;
    }
  goto ret0;

 L3267: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3268;
    }
  goto ret0;

 L3268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3269;
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3270;
    case CLOBBER:
      goto L3283;
    default:
     break;
   }
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3271;
    }
  goto ret0;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L3272;
  goto ret0;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3273;
  goto ret0;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10683 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 289;  /* *ashlsi3_cmp */
    }
  goto ret0;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3284;
    }
  goto ret0;

 L3284: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10719 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 290;  /* *ashlsi3_cconly */
    }
  goto ret0;

 L3496: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3497;
    }
  goto ret0;

 L3497: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13108;
  goto ret0;

 L13108: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3498;
    }
 L13109: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3529;
    }
  goto ret0;

 L3498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3499;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3499: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3500;
    case CLOBBER:
      goto L3513;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3501;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3503;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11499 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 304;  /* *ashrsi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3514;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11516 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 305;  /* *ashrsi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13109;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3530;
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3531;
    case CLOBBER:
      goto L3544;
    default:
     break;
   }
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3532;
    }
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3533;
  goto ret0;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3534;
  goto ret0;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11549 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 306;  /* *ashrsi3_cmp */
    }
  goto ret0;

 L3544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3545;
    }
  goto ret0;

 L3545: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11562 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 307;  /* *ashrsi3_cconly */
    }
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3813;
    }
  goto ret0;

 L3813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13110;
  goto ret0;

 L13110: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3814;
    }
 L13111: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3845;
    }
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3815;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3816;
    case CLOBBER:
      goto L3829;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3817;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3818;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3819;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12067 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 325;  /* *lshrsi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3830;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12084 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 326;  /* *lshrsi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13111;

 L3845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3846;
  goto ret0;

 L3846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3847;
    case CLOBBER:
      goto L3860;
    default:
     break;
   }
  goto ret0;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3848;
    }
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3849;
  goto ret0;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3850;
  goto ret0;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12117 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 327;  /* *lshrsi3_cmp */
    }
  goto ret0;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3861;
    }
  goto ret0;

 L3861: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12130 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 328;  /* *lshrsi3_cconly */
    }
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1165;
    }
 L1547: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1548;
    }
  goto ret0;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1166;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1547;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1167;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1547;

 L1167: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5688 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000))
    {
      return 151;  /* *addsi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1547;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1549;
  goto ret0;

 L1549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1550;
    }
  goto ret0;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L1551;
  goto ret0;

 L1551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1552;
  goto ret0;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6673 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 174;  /* *subsi_3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_23 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1225;
    case NEG:
      goto L1238;
    case MINUS:
      goto L1572;
    case AND:
      goto L2135;
    case IOR:
      goto L2384;
    case XOR:
      goto L2634;
    case NOT:
      goto L3186;
    case ASHIFT:
      goto L3325;
    case ASHIFTRT:
      goto L3586;
    case LSHIFTRT:
      goto L3902;
    case REG:
    case SUBREG:
    case MEM:
      goto L13076;
    default:
      goto ret0;
   }
 L13076: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1255;
    }
  goto ret0;

 L1225: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1226;
    }
  goto ret0;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1227;
    }
  goto ret0;

 L1227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1228;
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1229;
    case CLOBBER:
      goto L1274;
    default:
     break;
   }
  goto ret0;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1230;
    }
  goto ret0;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1231;
  goto ret0;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1232;
  goto ret0;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5868 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 155;  /* *addhi_2 */
    }
  goto ret0;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1275;
    }
  goto ret0;

 L1275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5987 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 158;  /* *addhi_5 */
    }
  goto ret0;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1239;
    }
  goto ret0;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1240;
    }
  goto ret0;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1241;
  goto ret0;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1242;
    }
  goto ret0;

 L1242: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5907 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 156;  /* *addhi_3 */
    }
  goto ret0;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1573;
    }
  goto ret0;

 L1573: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1574;
    }
  goto ret0;

 L1574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1575;
  goto ret0;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1576;
  goto ret0;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1577;
    }
  goto ret0;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1578;
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1579;
  goto ret0;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6719 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 176;  /* *subhi_2 */
    }
  goto ret0;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2136;
    }
  goto ret0;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2137;
    }
  goto ret0;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2138;
  goto ret0;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2139;
  goto ret0;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2140;
    }
  goto ret0;

 L2140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L2141;
  goto ret0;

 L2141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2142;
  goto ret0;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8230 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 211;  /* *andhi_2 */
    }
  goto ret0;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2385;
    }
  goto ret0;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2386;
    }
  goto ret0;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2387;
  goto ret0;

 L2387: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2388;
    case CLOBBER:
      goto L2401;
    default:
     break;
   }
  goto ret0;

 L2388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2389;
    }
  goto ret0;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == IOR)
    goto L2390;
  goto ret0;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2391;
  goto ret0;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8642 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 225;  /* *iorhi_2 */
    }
  goto ret0;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2402;
    }
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8654 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 226;  /* *iorhi_3 */
    }
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2635;
    }
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2636;
    }
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2637;
  goto ret0;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2638;
    case CLOBBER:
      goto L2651;
    default:
     break;
   }
  goto ret0;

 L2638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2639;
    }
  goto ret0;

 L2639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == XOR)
    goto L2640;
  goto ret0;

 L2640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2641;
  goto ret0;

 L2641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9019 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 239;  /* *xorhi_2 */
    }
  goto ret0;

 L2651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2652;
    }
  goto ret0;

 L2652: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9031 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 240;  /* *xorhi_3 */
    }
  goto ret0;

 L3186: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3187;
    }
  goto ret0;

 L3187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3188;
  goto ret0;

 L3188: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3189;
  goto ret0;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3190;
    }
  goto ret0;

 L3190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NOT)
    goto L3191;
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10117 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 283;  /* *one_cmplhi2_2 */
    }
  goto ret0;

 L3325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3326;
    }
  goto ret0;

 L3326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3327;
    }
  goto ret0;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3328;
  goto ret0;

 L3328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3329;
    case CLOBBER:
      goto L3342;
    default:
     break;
   }
  goto ret0;

 L3329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3330;
    }
  goto ret0;

 L3330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L3331;
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3332;
  goto ret0;

 L3332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10875 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 293;  /* *ashlhi3_cmp */
    }
  goto ret0;

 L3342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3343;
    }
  goto ret0;

 L3343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10911 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 294;  /* *ashlhi3_cconly */
    }
  goto ret0;

 L3586: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3587;
    }
  goto ret0;

 L3587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13112;
  goto ret0;

 L13112: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3588;
    }
 L13113: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3619;
    }
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3589;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3590;
    case CLOBBER:
      goto L3603;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3591;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3592;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3593;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11627 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 310;  /* *ashrhi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3604;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3604: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11644 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 311;  /* *ashrhi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13113;

 L3619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3620;
  goto ret0;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3621;
    case CLOBBER:
      goto L3634;
    default:
     break;
   }
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3622;
    }
  goto ret0;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3623;
  goto ret0;

 L3623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3624;
  goto ret0;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11662 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 312;  /* *ashrhi3_cmp */
    }
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3635;
    }
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11675 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 313;  /* *ashrhi3_cconly */
    }
  goto ret0;

 L3902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3903;
    }
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13114;
  goto ret0;

 L13114: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3904;
    }
 L13115: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3935;
    }
  goto ret0;

 L3904: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3905;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3905: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3906;
    case CLOBBER:
      goto L3919;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3907;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3908;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3909;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12195 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 331;  /* *lshrhi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3920;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3920: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12212 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 332;  /* *lshrhi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13115;

 L3935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3936;
  goto ret0;

 L3936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3937;
    case CLOBBER:
      goto L3950;
    default:
     break;
   }
  goto ret0;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3938;
    }
  goto ret0;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3939;
  goto ret0;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3940;
  goto ret0;

 L3940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12230 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 333;  /* *lshrhi3_cmp */
    }
  goto ret0;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3951;
    }
  goto ret0;

 L3951: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12243 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 334;  /* *lshrhi3_cconly */
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1256;
    }
 L1585: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1586;
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1257;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1585;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1258;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1585;

 L1258: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5947 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000))
    {
      return 157;  /* *addhi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1585;

 L1586: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1587;
  goto ret0;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1588;
    }
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1589;
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1590;
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6731 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 177;  /* *subhi_3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_24 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1332;
    case NEG:
      goto L1345;
    case MINUS:
      goto L1626;
    case AND:
      goto L2178;
    case IOR:
      goto L2445;
    case XOR:
      goto L2780;
    case NOT:
      goto L3202;
    case ASHIFT:
      goto L3384;
    case ASHIFTRT:
      goto L3708;
    case LSHIFTRT:
      goto L4024;
    case REG:
    case SUBREG:
    case MEM:
      goto L13079;
    default:
      goto ret0;
   }
 L13079: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1362;
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1333;
    }
  goto ret0;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1334;
    }
  goto ret0;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1335;
  goto ret0;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1336;
    case CLOBBER:
      goto L1381;
    default:
     break;
   }
  goto ret0;

 L1336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1337;
    }
  goto ret0;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1338;
  goto ret0;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1339;
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6174 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 162;  /* *addqi_2 */
    }
  goto ret0;

 L1381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1382;
    }
  goto ret0;

 L1382: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6291 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 165;  /* *addqi_5 */
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1346;
    }
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1347;
    }
  goto ret0;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1348;
  goto ret0;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1349;
    }
  goto ret0;

 L1349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6212 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 163;  /* *addqi_3 */
    }
  goto ret0;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1627;
    }
  goto ret0;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1628;
    }
  goto ret0;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1629;
  goto ret0;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1630;
  goto ret0;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1631;
    }
  goto ret0;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1632;
  goto ret0;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1633;
  goto ret0;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6774 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 180;  /* *subqi_2 */
    }
  goto ret0;

 L2178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L13116;
  goto ret0;

 L13116: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2179;
    }
 L13117: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2205;
    }
  goto ret0;

 L2179: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2180;
    }
  x4 = XEXP (x3, 0);
  goto L13117;

 L2180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2181;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2182;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2183;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L2184;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2185;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)))
    {
      return 214;  /* *andqi_2_maybe_si */
    }
 L2198: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8301 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 215;  /* *andqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13117;

 L2205: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2206;
    }
  goto ret0;

 L2206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2207;
  goto ret0;

 L2207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2208;
  goto ret0;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2209;
  goto ret0;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2210;
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L2211;
  goto ret0;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2212;
  goto ret0;

 L2212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 8315 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 216;  /* *andqi_2_slp */
    }
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L13118;
  goto ret0;

 L13118: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2446;
    }
 L13119: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2459;
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2447;
    }
  x4 = XEXP (x3, 0);
  goto L13119;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2448;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2449;
    case CLOBBER:
      goto L2476;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2450;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L2451;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2452;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8700 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 229;  /* *iorqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2477;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2477: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8726 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 231;  /* *iorqi_3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13119;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2460;
    }
  goto ret0;

 L2460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2461;
  goto ret0;

 L2461: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2462;
  goto ret0;

 L2462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2463;
  goto ret0;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2464;
  goto ret0;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L2465;
  goto ret0;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2466;
  goto ret0;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 8713 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 230;  /* *iorqi_2_slp */
    }
  goto ret0;

 L2780: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L13120;
  goto ret0;

 L13120: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2781;
    }
 L13121: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L2794;
    }
  goto ret0;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2782;
    }
  x4 = XEXP (x3, 0);
  goto L13121;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2783;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2784;
    case CLOBBER:
      goto L2811;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2785;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L2786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2787;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9151 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 246;  /* *xorqi_cc_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2812;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9178 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 248;  /* *xorqi_cc_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13121;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2795;
    }
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2796;
  goto ret0;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2797;
  goto ret0;

 L2797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L2798;
  goto ret0;

 L2798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2799;
  goto ret0;

 L2799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L2800;
  goto ret0;

 L2800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2801;
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 9164 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 247;  /* *xorqi_2_slp */
    }
  goto ret0;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3203;
    }
  goto ret0;

 L3203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3204;
  goto ret0;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3205;
  goto ret0;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3206;
    }
  goto ret0;

 L3206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NOT)
    goto L3207;
  goto ret0;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10161 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 285;  /* *one_cmplqi2_2 */
    }
  goto ret0;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3385;
    }
  goto ret0;

 L3385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3386;
    }
  goto ret0;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3387;
  goto ret0;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3388;
    case CLOBBER:
      goto L3401;
    default:
     break;
   }
  goto ret0;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3389;
    }
  goto ret0;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFT)
    goto L3390;
  goto ret0;

 L3390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3391;
  goto ret0;

 L3391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11069 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 297;  /* *ashlqi3_cmp */
    }
  goto ret0;

 L3401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3402;
    }
  goto ret0;

 L3402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11105 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 298;  /* *ashlqi3_cconly */
    }
  goto ret0;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3709;
    }
  goto ret0;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13122;
  goto ret0;

 L13122: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3710;
    }
 L13123: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3741;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3711;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3712;
    case CLOBBER:
      goto L3725;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3713;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3714;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3715;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11754 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 318;  /* *ashrqi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3726;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3726: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11771 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 319;  /* *ashrqi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13123;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3742;
  goto ret0;

 L3742: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3743;
    case CLOBBER:
      goto L3756;
    default:
     break;
   }
  goto ret0;

 L3743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3744;
    }
  goto ret0;

 L3744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L3745;
  goto ret0;

 L3745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3746;
  goto ret0;

 L3746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11789 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 320;  /* *ashrqi3_cmp */
    }
  goto ret0;

 L3756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3757;
    }
  goto ret0;

 L3757: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11802 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 321;  /* *ashrqi3_cconly */
    }
  goto ret0;

 L4024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4025;
    }
  goto ret0;

 L4025: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L13124;
  goto ret0;

 L13124: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4026;
    }
 L13125: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4057;
    }
  goto ret0;

 L4026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4027;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4027: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4028;
    case CLOBBER:
      goto L4041;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4029;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4030;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4031;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12321 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 339;  /* *lshrqi2_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4042;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4042: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 340;  /* *lshrqi2_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L13125;

 L4057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4058;
  goto ret0;

 L4058: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4059;
    case CLOBBER:
      goto L4072;
    default:
     break;
   }
  goto ret0;

 L4059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4060;
    }
  goto ret0;

 L4060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4061;
  goto ret0;

 L4061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4062;
  goto ret0;

 L4062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12356 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 341;  /* *lshrqi2_cmp */
    }
  goto ret0;

 L4072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4073;
    }
  goto ret0;

 L4073: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12369 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 342;  /* *lshrqi2_cconly */
    }
  goto ret0;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1363;
    }
 L1639: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1640;
    }
  goto ret0;

 L1363: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1364;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1639;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1365;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1639;

 L1365: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6251 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80))
    {
      return 164;  /* *addqi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1639;

 L1640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1641;
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1642;
    }
  goto ret0;

 L1642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L1643;
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1644;
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6786 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 181;  /* *subqi_3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_25 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12791;
    case HImode:
      goto L12794;
    case QImode:
      goto L12795;
    case SFmode:
      goto L12796;
    case DFmode:
      goto L12797;
    case XFmode:
      goto L12798;
    case DImode:
      goto L12799;
    case CCmode:
      goto L12807;
    case CCZmode:
      goto L12810;
    default:
      break;
    }
 L286: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case STRICT_LOW_PART:
      goto L287;
    case REG:
      goto L12814;
    case PC:
      goto L4725;
    default:
     break;
   }
 L6329: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L6330;
 L6395: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12815;
    case CCZmode:
      goto L12816;
    case QImode:
      goto L12817;
    case HImode:
      goto L12818;
    default:
      break;
    }
  goto ret0;

 L12791: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L286;

 L12794: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L268;
    }
 L12802: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L704;
    }
 L12805: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L753;
    }
  goto L286;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L12885;
  x2 = XEXP (x1, 0);
  goto L12802;

 L12885: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L471;
    case MULT:
      goto L1663;
    case DIV:
      goto L1931;
    case UNSPEC:
      goto L12889;
    case REG:
    case SUBREG:
      goto L12884;
    default:
      x2 = XEXP (x1, 0);
      goto L12802;
   }
 L12884: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L269;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L472;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L472: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L473;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12890;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L12890: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12892;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L12892: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L12894: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3018 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 73;  /* *zero_extendqihi2_and */
    }
 L12895: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3027 "../../gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 74;  /* *zero_extendqihi2_movzbw_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L12897;
  x2 = XEXP (x1, 0);
  goto L12802;

 L12897: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L1692;
    case SIGN_EXTEND:
      goto L1710;
    case REG:
    case SUBREG:
    case MEM:
      goto L12896;
    default:
      x2 = XEXP (x1, 0);
      goto L12802;
   }
 L12896: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1664;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1693;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1694;
  x2 = XEXP (x1, 0);
  goto L12802;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1695;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1696;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6972 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 185;  /* *umulqihi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1711;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1712;
  x2 = XEXP (x1, 0);
  goto L12802;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1713;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1713: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1714;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6996 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 186;  /* *mulqihi3_insn */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1665;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1666;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6918 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 183;  /* *mulhi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1932;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1933;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1934;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1935;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L1936;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L1937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 7537 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 196;  /* divmodhi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L12889: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 66)
    goto L5566;
  x2 = XEXP (x1, 0);
  goto L12802;

 L5566: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5567;
    }
  x2 = XEXP (x1, 0);
  goto L12802;

 L5567: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5568;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5569;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L5569: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17025 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 485;  /* fisthi2_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L270;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L271;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1376 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
    {
      return 38;  /* *swaphi_1 */
    }
 L278: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1388 "../../gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL))
    {
      return 39;  /* *swaphi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12802;

 L704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L705;
  x2 = XEXP (x1, 0);
  goto L12805;

 L705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L706;
    }
  x2 = XEXP (x1, 0);
  goto L12805;

 L706: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L707;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12805;

 L707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L708;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12805;

 L708: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 108;  /* fix_trunchi_i387_fisttp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12805;

 L753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L12899;
  x2 = XEXP (x1, 0);
  goto L286;

 L12899: ATTRIBUTE_UNUSED_LABEL
  tem = recog_20 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L286;

 L12795: ATTRIBUTE_UNUSED_LABEL
  tem = recog_21 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L286;

 L12796: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L400;
    }
 L12800: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L606;
    }
 L12811: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2984;
    }
  goto L286;

 L400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fp_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L401;
    }
  x2 = XEXP (x1, 0);
  goto L12800;

 L401: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L402;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12800;

 L402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L403;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12800;

 L403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2366 "../../gcc/config/i386/i386.md"
(reload_completed || TARGET_80387))
    {
      return 60;  /* *swapsf */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12800;

 L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L12962;
  x2 = XEXP (x1, 0);
  goto L12811;

 L12962: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_TRUNCATE)
    goto L607;
  if (absneg_operator (x2, SFmode))
    {
      operands[3] = x2;
      goto L2936;
    }
  x2 = XEXP (x1, 0);
  goto L12811;

 L607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L12964;
    case XFmode:
      goto L12965;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12811;

 L12964: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L608;
    }
  x2 = XEXP (x1, 0);
  goto L12811;

 L608: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L609;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L610;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3748 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387))
    {
      return 92;  /* *truncdfsf_mixed */
    }
 L618: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3774 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 93;  /* *truncdfsf_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L12965: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L629;
    }
  x2 = XEXP (x1, 0);
  goto L12811;

 L629: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L630;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L631;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L631: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3847 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387))
    {
      return 95;  /* *truncxfsf2_mixed */
    }
 L644: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3874 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 97;  /* *truncxfsf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L2936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2937;
    }
  x2 = XEXP (x1, 0);
  goto L12811;

 L2937: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2938;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L2939;
    }
 L2972: ATTRIBUTE_UNUSED_LABEL
  operands[2] = x2;
  goto L2973;

 L2939: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9521 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 257;  /* *absnegsf2_mixed */
    }
 L2956: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9531 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 258;  /* *absnegsf2_sse */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2972;

 L2973: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9541 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;  /* *absnegsf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12811;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L12966;
  x2 = XEXP (x1, 0);
  goto L286;

 L12966: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L12970;
  x2 = XEXP (x1, 0);
  goto L286;

 L12970: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 4:
      goto L12974;
    case 1:
      goto L12975;
    case 2:
      goto L12977;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L12974: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 50)
    goto L2985;
  x2 = XEXP (x1, 0);
  goto L286;

 L2985: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2986;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2986: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L2987;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2987: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[4] = x3;
      goto L2988;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[5] = x3;
      goto L2989;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L2991;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2991: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9580 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 261;  /* copysignsf3_var */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12975: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 80L:
      goto L5349;
    case 82L:
      goto L5387;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5349: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5350;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5350: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5351;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5352;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 81)
    goto L5353;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15612 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 463;  /* sincossf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5387: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5388;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5390;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 83)
    goto L5391;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15768 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 467;  /* *tansf3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12977: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 62)
    goto L5420;
  x2 = XEXP (x1, 0);
  goto L286;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L5421;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L5422;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5424;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5424: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15895 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 470;  /* atan2sf3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12797: ATTRIBUTE_UNUSED_LABEL
  if (fp_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L423;
    }
 L12801: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L653;
    }
 L12812: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L3061;
    }
  goto L286;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fp_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L424;
    }
  x2 = XEXP (x1, 0);
  goto L12801;

 L424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L425;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12801;

 L425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12801;

 L426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2699 "../../gcc/config/i386/i386.md"
(reload_completed || TARGET_80387))
    {
      return 65;  /* *swapdf */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12801;

 L653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L12978;
  x2 = XEXP (x1, 0);
  goto L12812;

 L12978: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_TRUNCATE)
    goto L654;
  if (absneg_operator (x2, DFmode))
    {
      operands[3] = x2;
      goto L3013;
    }
  x2 = XEXP (x1, 0);
  goto L12812;

 L654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L655;
    }
  x2 = XEXP (x1, 0);
  goto L12812;

 L655: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L656;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12812;

 L656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L657;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12812;

 L657: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3945 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 99;  /* *truncxfdf2_mixed */
    }
 L670: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3972 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 101;  /* *truncxfdf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12812;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3014;
    }
  x2 = XEXP (x1, 0);
  goto L12812;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3015;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12812;

 L3015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L3016;
    }
 L3049: ATTRIBUTE_UNUSED_LABEL
  operands[2] = x2;
  goto L3050;

 L3016: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9617 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 262;  /* *absnegdf2_mixed */
    }
 L3033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9627 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 263;  /* *absnegdf2_sse */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3049;

 L3050: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9637 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 264;  /* *absnegdf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12812;

 L3061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L12980;
  x2 = XEXP (x1, 0);
  goto L286;

 L12980: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L12984;
  x2 = XEXP (x1, 0);
  goto L286;

 L12984: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 4:
      goto L12988;
    case 1:
      goto L12989;
    case 2:
      goto L12991;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L12988: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 50)
    goto L3062;
  x2 = XEXP (x1, 0);
  goto L286;

 L3062: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L3063;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L3064;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[4] = x3;
      goto L3065;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3065: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[5] = x3;
      goto L3066;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3066: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3067;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L3068;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9676 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 266;  /* copysigndf3_var */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12989: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 80L:
      goto L5340;
    case 82L:
      goto L5378;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5340: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DFmode)
    goto L12993;
  x2 = XEXP (x1, 0);
  goto L286;

 L12993: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L5359;
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5341;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L5360;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5360: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5361;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5362;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 81)
    goto L5363;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5363: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == FLOAT_EXTEND)
    goto L5364;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5364: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 15649 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 464;  /* *sincosextendsfdf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5341: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5342;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5343;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 81)
    goto L5344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5344: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15577 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 462;  /* sincosdf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5379;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5380;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5381;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 83)
    goto L5382;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5382: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15724 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 466;  /* *tandf3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12991: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 62)
    goto L5405;
  x2 = XEXP (x1, 0);
  goto L286;

 L5405: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L5406;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5406: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L5407;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L5407: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5409;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L5409: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15854 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 469;  /* atan2df3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12798: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L446;
    }
 L12813: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L3089;
    }
  goto L286;

 L446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L12995;
  x2 = XEXP (x1, 0);
  goto L12813;

 L12995: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L13006;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L447;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L13006: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L13017;
    case 2:
      goto L13019;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L13017: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 80L:
      goto L5369;
    case 82L:
      goto L5396;
    case 84L:
      goto L5480;
    case 70L:
      goto L5582;
    case 71L:
      goto L5732;
    case 72L:
      goto L5882;
    case 73L:
      goto L5904;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5369: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5370;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5370: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5371;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5372;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 81)
    goto L5373;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5373: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15690 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 465;  /* sincosxf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5396: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5397;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5397: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5398;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5399;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 83)
    goto L5400;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5400: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15812 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 468;  /* *tanxf3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5480: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5481;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5481: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5482;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5483;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 85)
    goto L5484;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16352 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 474;  /* *fxtractxf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5582: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5583;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17067 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 487;  /* frndintxf2_floor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5732: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5733;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5734;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17308 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 498;  /* frndintxf2_ceil */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5883;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17549 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 509;  /* frndintxf2_trunc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5904: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5905;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5905: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5906;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17632 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 511;  /* frndintxf2_mask_pm */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L13019: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 62L:
      goto L5435;
    case 63L:
      goto L5450;
    case 64L:
      goto L5465;
    case 86L:
      goto L5494;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5436;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5436: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5437;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5437: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L5439;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15936 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 471;  /* atan2xf3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5450: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5451;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5451: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5452;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5453;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L5454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16112 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 472;  /* fyl2x_xf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5465: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5466;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5466: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5467;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5467: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L5469;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5469: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16298 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 473;  /* fyl2xp1_xf3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5494: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5495;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[3] = x3;
      goto L5496;
    }
  x2 = XEXP (x1, 0);
  goto L12813;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5498;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 87)
    goto L5499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5499: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5500;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L5500: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 16441 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 476;  /* *fscalexf4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L447: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L448;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L449;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2894 "../../gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 70;  /* swapxf */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12813;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (absneg_operator (x2, XFmode))
    {
      operands[3] = x2;
      goto L3090;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L3091;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3092;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L3093;

 L3093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9713 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 267;  /* *absnegxf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12799: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L528;
    }
 L12804: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L730;
    }
 L12809: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1726;
    }
  goto L286;

 L528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13028;
  x2 = XEXP (x1, 0);
  goto L12804;

 L13028: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L529;
    case FIX:
      goto L790;
    case PLUS:
      goto L1000;
    case MINUS:
      goto L1451;
    case NEG:
      goto L2846;
    case UNSPEC:
      goto L13036;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L12804;

 L529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L530;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 79;  /* zero_extendsidi2_32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L791;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L791: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L792;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L13039;
    case CCmode:
      goto L13040;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L13039: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L793;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L793: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 113;  /* fix_truncdi_i387_fisttp_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L13040: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4247 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 116;  /* *fix_truncdi_i387_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1001;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1002;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L1002: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1003;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L1003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4761 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 138;  /* *adddi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L1451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1452;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L1452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1453;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L1453: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1454;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L1454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6491 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 168;  /* *subdi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2847;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2848;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L2848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9336 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 250;  /* *negdi2_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L13036: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13041;
  x2 = XEXP (x1, 0);
  goto L12804;

 L13041: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 66L:
      goto L5538;
    case 74L:
      goto L5628;
    case 75L:
      goto L5778;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L5538: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5539;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L5539: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5540;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5541;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16962 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 480;  /* fistdi2_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5628: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5629;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L5629: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5630;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17149 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 491;  /* *fistdi2_floor_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5779;
    }
  x2 = XEXP (x1, 0);
  goto L12804;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5780;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L5780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17390 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 502;  /* *fistdi2_ceil_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12804;

 L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13044;
  x2 = XEXP (x1, 0);
  goto L12809;

 L13044: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L731;
    case UNSPEC:
      goto L13046;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L12809;

 L731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L732;
    }
  x2 = XEXP (x1, 0);
  goto L12809;

 L732: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L733;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L734;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L734: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4194 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 110;  /* fix_truncdi_i387_fisttp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L13046: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 66)
    goto L5515;
  x2 = XEXP (x1, 0);
  goto L12809;

 L5515: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5516;
    }
  x2 = XEXP (x1, 0);
  goto L12809;

 L5516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5517;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L5517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L5518;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L5518: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16950 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 479;  /* fistdi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12809;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13047;
  x2 = XEXP (x1, 0);
  goto L286;

 L13047: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L1727;
    case ASHIFT:
      goto L3212;
    case ASHIFTRT:
      goto L3414;
    case LSHIFTRT:
      goto L3769;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L286;

 L1727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L13051;
  x2 = XEXP (x1, 0);
  goto L286;

 L13051: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L1728;
    case SIGN_EXTEND:
      goto L1746;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L286;

 L1728: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1729;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1730;
  x2 = XEXP (x1, 0);
  goto L286;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1731;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1732;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7049 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 187;  /* *umulsidi3_insn */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1747;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1748;
  x2 = XEXP (x1, 0);
  goto L286;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1749;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7101 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 188;  /* *mulsidi3_insn */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_pm1_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3213;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3214;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 286;  /* *ashldi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3415;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3416;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3416: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 299;  /* *ashrdi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3770;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3771;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L3771: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3772;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L3772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 322;  /* *lshrdi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12807: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L1067;
  goto L286;

 L1067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 24)
    goto L1068;
  x2 = XEXP (x1, 0);
  goto L286;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L13053;
    case QImode:
      goto L13054;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L13053: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1069;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1070;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1071;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1072;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1073;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1074;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4862 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 142;  /* *addsi3_cc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L13054: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1080;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1081;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1082;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1083;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1084;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4874 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 143;  /* addqi3_cc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L12810: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L2869;
  goto L286;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L2870;
  x2 = XEXP (x1, 0);
  goto L286;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L13055;
    case HImode:
      goto L13056;
    case QImode:
      goto L13057;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L13055: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2871;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4844;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2872;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2873;
  x2 = XEXP (x1, 0);
  goto L286;

 L2873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2875;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L2876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 9425 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 252;  /* *negsi2_cmpz */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L4844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4845;
  x2 = XEXP (x1, 0);
  goto L286;

 L4845: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4846;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4847;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L4847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CTZ)
    goto L4848;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L4848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 400;  /* *ffssi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L13056: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2894;
  x2 = XEXP (x1, 0);
  goto L286;

 L2894: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2895;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2896;
  x2 = XEXP (x1, 0);
  goto L286;

 L2896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2898;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NEG)
    goto L2899;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 9469 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 254;  /* *neghi2_cmpz */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L13057: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L2917;
  x2 = XEXP (x1, 0);
  goto L286;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2918;
    }
  x2 = XEXP (x1, 0);
  goto L286;

 L2918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2919;
  x2 = XEXP (x1, 0);
  goto L286;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NEG)
    goto L2922;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 9496 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 256;  /* *negqi2_cmpz */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L286;

 L287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L13059;
    case QImode:
      goto L13060;
    default:
      break;
    }
  goto L6329;

 L13059: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L288;
    }
  goto L6329;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L289;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1418 "../../gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)))
    {
      return 41;  /* *movstricthi_xor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L13060: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L326;
    }
 L13061: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L1315;
    }
  goto L6329;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L327;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L13061;

 L327: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L328;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L13061;

 L328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1588 "../../gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 47;  /* *movstrictqi_xor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L13061;

 L1315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L13062;
  x2 = XEXP (x1, 0);
  goto L6329;

 L13062: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1316;
    case MINUS:
      goto L1610;
    case AND:
      goto L2162;
    case IOR:
      goto L2429;
    case XOR:
      goto L2679;
    case ASHIFTRT:
      goto L3662;
    case LSHIFTRT:
      goto L3978;
    case ROTATE:
      goto L4158;
    case ROTATERT:
      goto L4304;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L6329;

 L1316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1317;
  x2 = XEXP (x1, 0);
  goto L6329;

 L1317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1318;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1319;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L1319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6131 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 161;  /* *addqi_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1611;
  x2 = XEXP (x1, 0);
  goto L6329;

 L1611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1612;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L1612: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1613;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L1613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6760 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 179;  /* *subqi_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2163;
  x2 = XEXP (x1, 0);
  goto L6329;

 L2163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2164;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L2164: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2165;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8263 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 213;  /* *andqi_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2430;
  x2 = XEXP (x1, 0);
  goto L6329;

 L2430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2431;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2432;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8687 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 228;  /* *iorqi_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2680;
  x2 = XEXP (x1, 0);
  goto L6329;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2681;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9064 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 242;  /* *xorqi_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3663;
  x2 = XEXP (x1, 0);
  goto L6329;

 L3663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3664;
    }
 L3693: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3694;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L3664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3693;

 L3665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11708 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 315;  /* *ashrqi3_1_one_bit_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3693;

 L3694: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3695;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L3695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11735 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 317;  /* *ashrqi3_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L3978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3979;
  x2 = XEXP (x1, 0);
  goto L6329;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3980;
    }
 L4009: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4010;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L3980: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3981;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4009;

 L3981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12276 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 336;  /* *lshrqi3_1_one_bit_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4009;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12302 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 338;  /* *lshrqi3_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4159;
  x2 = XEXP (x1, 0);
  goto L6329;

 L4159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4160;
    }
 L4189: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4190;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4161;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4189;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12553 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 348;  /* *rotlqi3_1_one_bit_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4189;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4191;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12581 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 350;  /* *rotlqi3_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4305;
  x2 = XEXP (x1, 0);
  goto L6329;

 L4305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4306;
    }
 L4335: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4336;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L4306: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4307;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4335;

 L4307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12794 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 358;  /* *rotrqi3_1_one_bit_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4335;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4337;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12820 "../../gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 360;  /* *rotrqi3_1_slp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L12814: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L1132;
  goto L6329;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L1133;
  x2 = XEXP (x1, 0);
  goto L6329;

 L1133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L13071;
    case HImode:
      goto L13074;
    case QImode:
      goto L13077;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L13071: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L6329;

 L13074: ATTRIBUTE_UNUSED_LABEL
  tem = recog_23 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L6329;

 L13077: ATTRIBUTE_UNUSED_LABEL
  tem = recog_24 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L6329;

 L4725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4726;
    }
  x2 = XEXP (x1, 0);
  goto L6329;

 L4726: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L4727;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L4728;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6329;

 L4728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 382;  /* *tablejump_1 */

 L6330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L6331;
  x2 = XEXP (x1, 0);
  goto L6395;

 L6331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L6332;
  x2 = XEXP (x1, 0);
  goto L6395;

 L6332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L13126;
  x2 = XEXP (x1, 0);
  goto L6395;

 L13126: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6333;
    }
 L13127: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6345;
    }
  x2 = XEXP (x1, 0);
  goto L6395;

 L6333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L6334;

 L6334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13127;

 L6335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L6336;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13127;

 L6336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6337;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13127;

 L6337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L6338;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13127;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 544;  /* *call_value_pop_0 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L13127;

 L6345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L6346;

 L6346: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6347;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6395;

 L6347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L6348;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6395;

 L6348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6349;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6395;

 L6349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L6350;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6395;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      return 545;  /* *call_value_pop_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L6395;

 L12815: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6396;
    }
 L12819: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9181;
    }
  goto ret0;

 L6396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13128;
  x2 = XEXP (x1, 0);
  goto L12819;

 L13128: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L13131;
    case UNSPEC_VOLATILE:
      goto L13133;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L12819;

 L13131: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13134;
  x2 = XEXP (x1, 0);
  goto L12819;

 L13134: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 100L:
      goto L6397;
    case 102L:
      goto L6415;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L6397: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6398;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L6398: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L6399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6400;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L6400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 552;  /* stack_protect_set_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L6415: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6416;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L6416: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L6417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6418;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L6418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 553;  /* stack_tls_protect_set_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L13133: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 13)
    goto L9372;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9372: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L13136;
  x2 = XEXP (x1, 0);
  goto L12819;

 L13136: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L9373;
    case MINUS:
      goto L9421;
    case IOR:
      goto L9469;
    case AND:
      goto L9517;
    case XOR:
      goto L9565;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9374;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9374: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9375;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9375: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 914;  /* sync_addsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9422;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9423;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9423: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9424;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 917;  /* sync_subsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9469: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9470;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9471;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9471: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9472;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 920;  /* sync_iorsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9517: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9518;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9518: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9519;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 923;  /* sync_andsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9565: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9566;
  x2 = XEXP (x1, 0);
  goto L12819;

 L9566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9567;
    }
  x2 = XEXP (x1, 0);
  goto L12819;

 L9567: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9568;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 926;  /* sync_xorsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12819;

 L9181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13142;
  goto ret0;

 L13142: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9305;
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9182;
    }
  goto ret0;

 L9305: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9306;
    }
  goto ret0;

 L9306: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9307;
  goto ret0;

 L9307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9308;
  goto ret0;

 L9308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13143;
  goto ret0;

 L13143: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L9309;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 911;  /* sync_lock_test_and_setsi */
    }
  goto ret0;

 L9309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9310;
  goto ret0;

 L9310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9311;
    }
  goto ret0;

 L9311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 908;  /* sync_old_addsi */
    }
  goto ret0;

 L9182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9183;
  goto ret0;

 L9183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9184;
  goto ret0;

 L9184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9185;
  goto ret0;

 L9185: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9186;
  goto ret0;

 L9186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9187;
    }
  goto ret0;

 L9187: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L9188;
    }
  goto ret0;

 L9188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 902;  /* sync_compare_and_swapsi */
    }
  goto ret0;

 L12816: ATTRIBUTE_UNUSED_LABEL
  if (flags_reg_operand (x2, CCZmode))
    {
      operands[0] = x2;
      goto L6422;
    }
  goto ret0;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode)
    goto L13145;
  goto ret0;

 L13145: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L13147;
  goto ret0;

 L13147: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L13149;
  goto ret0;

 L13149: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 101L:
      goto L6423;
    case 103L:
      goto L6437;
    default:
      break;
    }
  goto ret0;

 L6423: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6424;
    }
  goto ret0;

 L6424: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (memory_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6425;
    }
  goto ret0;

 L6425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6426;
  goto ret0;

 L6426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      return 554;  /* stack_protect_test_si */
    }
  goto ret0;

 L6437: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6438;
    }
  goto ret0;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6439;
    }
  goto ret0;

 L6439: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6440;
  goto ret0;

 L6440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      return 555;  /* stack_tls_protect_test_si */
    }
  goto ret0;

 L12817: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9135;
    }
 L12820: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9339;
    }
  goto ret0;

 L9135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L13152;
  x2 = XEXP (x1, 0);
  goto L12820;

 L13152: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9259;
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L9136;
    }
  x2 = XEXP (x1, 0);
  goto L12820;

 L9259: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9260;
    }
  x2 = XEXP (x1, 0);
  goto L12820;

 L9260: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9261;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9262;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L13153;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L13153: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L9263;
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      return 909;  /* sync_lock_test_and_setqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9264;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9265;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9265: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 906;  /* sync_old_addqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9136: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9137;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9139;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9139: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9140;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9140: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9141;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9141: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L9142;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9142: ATTRIBUTE_UNUSED_LABEL
  if (
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 900;  /* sync_compare_and_swapqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12820;

 L9339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 13)
    goto L9340;
  goto ret0;

 L9340: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == QImode)
    goto L13155;
  goto ret0;

 L13155: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L9341;
    case MINUS:
      goto L9389;
    case IOR:
      goto L9437;
    case AND:
      goto L9485;
    case XOR:
      goto L9533;
    default:
     break;
   }
  goto ret0;

 L9341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9342;
  goto ret0;

 L9342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9343;
    }
  goto ret0;

 L9343: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9344;
  goto ret0;

 L9344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 912;  /* sync_addqi */
    }
  goto ret0;

 L9389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9390;
  goto ret0;

 L9390: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9391;
    }
  goto ret0;

 L9391: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9392;
  goto ret0;

 L9392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 915;  /* sync_subqi */
    }
  goto ret0;

 L9437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9438;
  goto ret0;

 L9438: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9439;
    }
  goto ret0;

 L9439: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9440;
  goto ret0;

 L9440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 918;  /* sync_iorqi */
    }
  goto ret0;

 L9485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9486;
  goto ret0;

 L9486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9487;
    }
  goto ret0;

 L9487: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9488;
  goto ret0;

 L9488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 921;  /* sync_andqi */
    }
  goto ret0;

 L9533: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9534;
  goto ret0;

 L9534: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L9535;
    }
  goto ret0;

 L9535: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9536;
  goto ret0;

 L9536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 924;  /* sync_xorqi */
    }
  goto ret0;

 L12818: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L9158;
    }
 L12821: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L9355;
    }
  goto ret0;

 L9158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L13161;
  x2 = XEXP (x1, 0);
  goto L12821;

 L13161: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9282;
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L9159;
    }
  x2 = XEXP (x1, 0);
  goto L12821;

 L9282: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9283;
    }
  x2 = XEXP (x1, 0);
  goto L12821;

 L9283: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L13162;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L13162: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L9286;
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 910;  /* sync_lock_test_and_sethi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9287;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L9288;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9288: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 907;  /* sync_old_addhi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9159: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9160;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9161;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9162;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9162: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9163;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9163: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L9164;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9164: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L9165;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9165: ATTRIBUTE_UNUSED_LABEL
  if (
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 901;  /* sync_compare_and_swaphi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12821;

 L9355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 13)
    goto L9356;
  goto ret0;

 L9356: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == HImode)
    goto L13164;
  goto ret0;

 L13164: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L9357;
    case MINUS:
      goto L9405;
    case IOR:
      goto L9453;
    case AND:
      goto L9501;
    case XOR:
      goto L9549;
    default:
     break;
   }
  goto ret0;

 L9357: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9358;
  goto ret0;

 L9358: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9359;
    }
  goto ret0;

 L9359: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9360;
  goto ret0;

 L9360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 913;  /* sync_addhi */
    }
  goto ret0;

 L9405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9406;
  goto ret0;

 L9406: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9407;
    }
  goto ret0;

 L9407: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9408;
  goto ret0;

 L9408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 916;  /* sync_subhi */
    }
  goto ret0;

 L9453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9454;
  goto ret0;

 L9454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9455;
    }
  goto ret0;

 L9455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9456;
  goto ret0;

 L9456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 919;  /* sync_iorhi */
    }
  goto ret0;

 L9501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9502;
  goto ret0;

 L9502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9503;
    }
  goto ret0;

 L9503: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9504;
  goto ret0;

 L9504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 922;  /* sync_andhi */
    }
  goto ret0;

 L9549: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L9550;
  goto ret0;

 L9550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L9551;
    }
  goto ret0;

 L9551: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9552;
  goto ret0;

 L9552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 925;  /* sync_xorhi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_26 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L1763;
    case DIV:
      goto L1841;
    case UDIV:
      goto L1942;
    case FFS:
      goto L4815;
    case UNSPEC:
      goto L13215;
    case PLUS:
      goto L6300;
    case UNSPEC_VOLATILE:
      goto L13216;
    case SUBREG:
    case MEM:
      goto L13213;
    default:
      goto ret0;
   }
 L13213: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9170;
    }
  goto ret0;

 L1763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1764;
  goto ret0;

 L1764: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1765;
  goto ret0;

 L1765: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L13217;
  goto ret0;

 L13217: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L1766;
    case SIGN_EXTEND:
      goto L1791;
    default:
     break;
   }
  goto ret0;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1767;
    }
  goto ret0;

 L1767: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L1768;
  goto ret0;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1769;
    }
  goto ret0;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L1770;
  goto ret0;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1771;
  goto ret0;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1772;
    }
  goto ret0;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1773;
  goto ret0;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7173 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 189;  /* *umulsi3_highpart_insn */
    }
  goto ret0;

 L1791: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1792;
    }
  goto ret0;

 L1792: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1793;
  goto ret0;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1794;
    }
  goto ret0;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L1795;
  goto ret0;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1796;
  goto ret0;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1797;
    }
  goto ret0;

 L1797: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1798;
  goto ret0;

 L1798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7265 "../../gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 190;  /* *smulsi3_highpart_insn */
    }
  goto ret0;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L13219;
  goto ret0;

 L13219: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1842;
    }
 L13220: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1905;
    }
  goto ret0;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1843;
    }
  x3 = XEXP (x2, 0);
  goto L13220;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1844;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1845;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1846;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1847;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L1848;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L13221;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L13221: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L13223: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L13225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7468 "../../gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD))
    {
      return 193;  /* *divmodsi4_nocltd */
    }
 L13226: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7479 "../../gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD))
    {
      return 194;  /* *divmodsi4_cltd */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L13220;

 L1905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1906;
    }
  goto ret0;

 L1906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1907;
  goto ret0;

 L1907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1908;
    }
  goto ret0;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1909;
  goto ret0;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1910;
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1911;
  goto ret0;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1912;
  goto ret0;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1913;
    }
  goto ret0;

 L1913: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 195;  /* *divmodsi_noext */
    }
  goto ret0;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1943;
    }
  goto ret0;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1944;
    }
  goto ret0;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1945;
  goto ret0;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1946;
    }
  goto ret0;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1947;
  goto ret0;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1948;
  goto ret0;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1949;
  goto ret0;

 L1949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L1950;
    case USE:
      goto L1989;
    default:
     break;
   }
  goto ret0;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 197;  /* udivmodsi4 */
    }
  goto ret0;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 198;  /* *udivmodsi4_noext */
    }
  goto ret0;

 L4815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4816;
    }
  goto ret0;

 L4816: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4817;
  goto ret0;

 L4817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4818;
    }
  goto ret0;

 L4818: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4819;
  goto ret0;

 L4819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14320 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE))
    {
      return 398;  /* *ffs_cmove */
    }
  goto ret0;

 L13215: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 20)
    goto L6169;
  goto ret0;

 L6169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6170;
  goto ret0;

 L6170: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6171;
    }
  goto ret0;

 L6171: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6172;
    }
  goto ret0;

 L6172: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6173;
    }
  goto ret0;

 L6173: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6174;
    }
  goto ret0;

 L6174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6175;
  goto ret0;

 L6175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6176;
  goto ret0;

 L6176: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6177;
  goto ret0;

 L6177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6178;
    }
  goto ret0;

 L6178: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 526;  /* *strlenqi_1 */
    }
  goto ret0;

 L6300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6301;
    }
  goto ret0;

 L6301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6302;
    }
  goto ret0;

 L6302: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6303;
  goto ret0;

 L6303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6304;
  goto ret0;

 L6304: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6305;
  goto ret0;

 L6305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6306;
  goto ret0;

 L6306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 542;  /* pro_epilogue_adjust_stack_1 */
    }
  goto ret0;

 L13216: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9293;
  goto ret0;

 L9293: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9294;
    }
  goto ret0;

 L9294: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9295;
  goto ret0;

 L9295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9296;
  goto ret0;

 L9296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L9297;
  goto ret0;

 L9297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9298;
  goto ret0;

 L9298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9299;
    }
  goto ret0;

 L9299: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9300;
  goto ret0;

 L9300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
    {
      return 908;  /* sync_old_addsi */
    }
  goto ret0;

 L9170: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9171;
  goto ret0;

 L9171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9172;
  goto ret0;

 L9172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9173;
  goto ret0;

 L9173: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9174;
  goto ret0;

 L9174: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9175;
    }
  goto ret0;

 L9175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L9176;
    }
  goto ret0;

 L9176: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L9177;
    case SET:
      goto L9236;
    default:
     break;
   }
  goto ret0;

 L9177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 902;  /* sync_compare_and_swapsi */
    }
  goto ret0;

 L9236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L9237;
  goto ret0;

 L9237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L9238;
  goto ret0;

 L9238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 3
      && XINT (x3, 1) == 11)
    goto L9239;
  goto ret0;

 L9239: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L9240;
  goto ret0;

 L9240: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L9241;
  goto ret0;

 L9241: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (rtx_equal_p (x4, operands[3]))
    goto L9242;
  goto ret0;

 L9242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 83 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 905;  /* *sync_compare_and_swap_ccsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_27 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L13184;
    case DImode:
      goto L13173;
    case HImode:
      goto L13188;
    case SFmode:
      goto L13180;
    case DFmode:
      goto L13181;
    case XFmode:
      goto L13182;
    case QImode:
      goto L13189;
    default:
      break;
    }
 L4388: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L4389;
  goto ret0;

 L13184: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L13191;
    case MEM:
      goto L6032;
    default:
     break;
   }
 L13172: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L207;
    }
 L13177: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L891;
    }
 L13178: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1762;
    }
 L13185: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4828;
    }
  goto L4388;

 L13191: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 7)
    goto L4801;
  goto L13172;

 L4801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4802;
  x2 = XEXP (x1, 0);
  goto L13172;

 L4802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L4803;
  x2 = XEXP (x1, 0);
  goto L13172;

 L4803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L4804;
  x2 = XEXP (x1, 0);
  goto L13172;

 L4804: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4805;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 6)
    goto L4806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L4807;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L4808;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4808: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4809;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L4810;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L4810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 397;  /* leave */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6033;
    }
  goto L13172;

 L6033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6034;
    }
  x2 = XEXP (x1, 0);
  goto L13172;

 L6034: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6035;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6036;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6037;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6038;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L6039;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6039: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6040;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L6040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 18097 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 519;  /* *strsetsi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13172;

 L207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13192;
  x2 = XEXP (x1, 0);
  goto L13177;

 L13192: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L208;
    case FIX:
      goto L762;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13177;

 L208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L209;
  x2 = XEXP (x1, 0);
  goto L13177;

 L209: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L210;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L211;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L212;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L213;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L214;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L216;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH)
    {
      return 30;  /* *popsi1_epilogue */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L763;
    }
  x2 = XEXP (x1, 0);
  goto L13177;

 L763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L764;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L765;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L766;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L767;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 112;  /* fix_truncsi_i387_fisttp_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13177;

 L891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13194;
  x2 = XEXP (x1, 0);
  goto L13178;

 L13194: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L892;
    case UNSPEC:
      goto L13199;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13178;

 L892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L893;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L895;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L895: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L897;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L897: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4339 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 120;  /* fix_truncsi_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L13199: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13203;
  x2 = XEXP (x1, 0);
  goto L13178;

 L13203: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5698;
    case 75L:
      goto L5848;
    case 100L:
      goto L6387;
    case 102L:
      goto L6405;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L5698: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5699;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L5699: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5701;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5703;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5703: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17242 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 495;  /* fistsi2_floor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5848: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5849;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L5849: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5850;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5851;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5851: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5852;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5853;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L5853: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17483 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 506;  /* fistsi2_ceil */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6387: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6388;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L6388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6390;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6391;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6391: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6392;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 552;  /* stack_protect_set_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6405: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6406;
    }
  x2 = XEXP (x1, 0);
  goto L13178;

 L6406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6408;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L6410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 553;  /* stack_tls_protect_set_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13178;

 L1762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13207;
  x2 = XEXP (x1, 0);
  goto L13185;

 L13207: ATTRIBUTE_UNUSED_LABEL
  tem = recog_26 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L13185;

 L4828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FFS)
    goto L4829;
  x2 = XEXP (x1, 0);
  goto L4388;

 L4829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4830;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4830: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4831;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4832;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4832: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4833;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 399;  /* *ffs_no_cmove */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13173: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L540;
    }
 L13175: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L845;
    }
 L13183: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4084;
    }
  goto L4388;

 L540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13227;
  x2 = XEXP (x1, 0);
  goto L13175;

 L13227: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L541;
    case FIX:
      goto L780;
    case UNSPEC:
      goto L13230;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13175;

 L541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L542;
    }
  x2 = XEXP (x1, 0);
  goto L13175;

 L542: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L544: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L545;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      return 80;  /* *extendsidi2_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L781;
    }
  x2 = XEXP (x1, 0);
  goto L13175;

 L781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L782;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L783;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L784;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L785;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 113;  /* fix_truncdi_i387_fisttp_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L13230: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 66)
    goto L5528;
  x2 = XEXP (x1, 0);
  goto L13175;

 L5528: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5529;
    }
  x2 = XEXP (x1, 0);
  goto L13175;

 L5529: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5530;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L5530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5531;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L5531: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L5532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L5533;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L5533: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16962 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 480;  /* fistdi2_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13175;

 L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13231;
  x2 = XEXP (x1, 0);
  goto L13183;

 L13231: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L846;
    case UNSPEC:
      goto L13234;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13183;

 L846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L847;
    }
  x2 = XEXP (x1, 0);
  goto L13183;

 L847: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L848;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L849;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L849: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L850;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L851;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L851: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4282 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 117;  /* fix_truncdi_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L13234: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13236;
  x2 = XEXP (x1, 0);
  goto L13183;

 L13236: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5652;
    case 75L:
      goto L5802;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13183;

 L5652: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5653;
    }
  x2 = XEXP (x1, 0);
  goto L13183;

 L5653: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5654;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5655;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5655: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5656;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5657;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5657: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17183 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 492;  /* fistdi2_floor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5803;
    }
  x2 = XEXP (x1, 0);
  goto L13183;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5804;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5805;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5807;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L5807: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17424 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 503;  /* fistdi2_ceil */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13183;

 L4084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13238;
  x2 = XEXP (x1, 0);
  goto L4388;

 L13238: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ROTATE:
      goto L4085;
    case ROTATERT:
      goto L4217;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4086;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4087;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4087: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4088;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4089: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4090;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      return 343;  /* ix86_rotldi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4218;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4219;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L4219: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4220;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4221;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4222;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      return 352;  /* ix86_rotrdi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13188: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6044;
 L13174: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L743;
    }
 L13176: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L881;
    }
 L13179: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1917;
    }
  goto L4388;

 L6044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6045;
    }
  goto L13174;

 L6045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L6046;
    }
  x2 = XEXP (x1, 0);
  goto L13174;

 L6046: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6047;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6048;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6049;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6049: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6050;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L6051;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6051: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6052;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L6052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 18123 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 520;  /* *strsethi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13174;

 L743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L744;
  x2 = XEXP (x1, 0);
  goto L13176;

 L744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L745;
    }
  x2 = XEXP (x1, 0);
  goto L13176;

 L745: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L746;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13176;

 L746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L747;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13176;

 L747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13176;

 L748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L749;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13176;

 L749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4208 "../../gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 111;  /* fix_trunchi_i387_fisttp_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13176;

 L881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L13240;
  x2 = XEXP (x1, 0);
  goto L13179;

 L13240: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L882;
    case UNSPEC:
      goto L13243;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13179;

 L882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L883;
    }
  x2 = XEXP (x1, 0);
  goto L13179;

 L883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L885;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L886;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L887;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L887: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4339 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 119;  /* fix_trunchi_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L13243: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13245;
  x2 = XEXP (x1, 0);
  goto L13179;

 L13245: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5688;
    case 75L:
      goto L5838;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13179;

 L5688: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5689;
    }
  x2 = XEXP (x1, 0);
  goto L13179;

 L5689: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5691;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5691: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5692;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5693;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5693: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17242 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 494;  /* fisthi2_floor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5838: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5839;
    }
  x2 = XEXP (x1, 0);
  goto L13179;

 L5839: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5840;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5841;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5841: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5842;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5843;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L5843: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17483 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 505;  /* fisthi2_ceil */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13179;

 L1917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L13247;
  x2 = XEXP (x1, 0);
  goto L4388;

 L13247: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1918;
    case UDIV:
      goto L2009;
    case UNSPEC_VOLATILE:
      goto L13251;
    case SUBREG:
    case MEM:
      goto L13249;
    default:
      x2 = XEXP (x1, 0);
      goto L4388;
   }
 L13249: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L9147;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1919;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L1919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1920;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L1920: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1921;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1922;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L1923;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1924;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1926;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L1926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7537 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    {
      return 196;  /* divmodhi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2010;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2011;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2012;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2013;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L2014;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2015;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2016;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2017;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2018;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2018: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 199;  /* *udivmodhi_noext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13251: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9270;
  x2 = XEXP (x1, 0);
  goto L4388;

 L9270: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9271;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L9271: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9272;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9273;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L9274;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9275;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L9276;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9276: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9277;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
    {
      return 907;  /* sync_old_addhi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9147: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9148;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9149;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9150;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9150: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9151;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9151: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L9152;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9152: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L9153;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L9154;
    case SET:
      goto L9218;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 901;  /* sync_compare_and_swaphi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L9219;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L9220;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 3
      && XINT (x3, 1) == 11)
    goto L9221;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9221: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L9222;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9222: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L9223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9223: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (rtx_equal_p (x4, operands[3]))
    goto L9224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 83 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 904;  /* *sync_compare_and_swap_cchi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13180: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L2926;
    }
  goto L4388;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (absneg_operator (x2, SFmode))
    {
      operands[3] = x2;
      goto L2927;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L2927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2928;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L2928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2929;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L2930;
    }
 L2963: ATTRIBUTE_UNUSED_LABEL
  operands[2] = x2;
  goto L2964;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2931;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2963;

 L2931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L13252;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2963;

 L13252: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13254;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2963;

 L13254: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13256;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2963;

 L13256: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9521 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)))
    {
      return 257;  /* *absnegsf2_mixed */
    }
 L13257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9531 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)))
    {
      return 258;  /* *absnegsf2_sse */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L2963;

 L2964: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2965;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L2965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9541 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)))
    {
      return 259;  /* *absnegsf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13181: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L3003;
    }
  goto L4388;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (absneg_operator (x2, DFmode))
    {
      operands[3] = x2;
      goto L3004;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3005;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3006;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L3006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L3007;
    }
 L3040: ATTRIBUTE_UNUSED_LABEL
  operands[2] = x2;
  goto L3041;

 L3007: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3008;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3040;

 L3008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L13258;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3040;

 L13258: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13260;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3040;

 L13260: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13262;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3040;

 L13262: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9617 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)))
    {
      return 262;  /* *absnegdf2_mixed */
    }
 L13263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9627 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)))
    {
      return 263;  /* *absnegdf2_sse */
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3040;

 L3041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3042;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L3042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9637 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)))
    {
      return 264;  /* *absnegdf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13182: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L3080;
    }
 L13186: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L5267;
    }
  goto L4388;

 L3080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (absneg_operator (x2, XFmode))
    {
      operands[3] = x2;
      goto L3081;
    }
  x2 = XEXP (x1, 0);
  goto L13186;

 L3081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L3082;
    }
  x2 = XEXP (x1, 0);
  goto L13186;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3083;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13186;

 L3083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L3084;

 L3084: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13186;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9713 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands)))
    {
      return 267;  /* *absnegxf2_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13186;

 L5267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L13264;
  x2 = XEXP (x1, 0);
  goto L4388;

 L13264: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L13270;
  x2 = XEXP (x1, 0);
  goto L4388;

 L13270: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L13276;
    case 1:
      goto L13278;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L13276: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 88L:
      goto L5268;
    case 90L:
      goto L5283;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5269;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[3] = x3;
      goto L5270;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5270: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5271;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 89)
    goto L5273;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5273: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5274;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5274: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L5275;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5276;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5277;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 38)
    goto L5278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5278: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 15323 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 452;  /* fpremxf4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L5284;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, XFmode))
    {
      operands[3] = x3;
      goto L5285;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5285: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5286;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L5287;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 91)
    goto L5288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5288: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5289;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5289: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L5290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 38)
    goto L5293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5293: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 15408 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 453;  /* fprem1xf4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13278: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 70L:
      goto L5594;
    case 71L:
      goto L5744;
    case 72L:
      goto L5894;
    case 73L:
      goto L5916;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5594: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5595;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5595: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5596;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5597;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5597: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5598;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5599;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5599: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17093 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 488;  /* frndintxf2_floor_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5744: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5745;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5745: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5746;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5747;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5749;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17334 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 499;  /* frndintxf2_ceil_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5894: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5895;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5895: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5897;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5897: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5898;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5899;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5899: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17575 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 510;  /* frndintxf2_trunc_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5917;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L5917: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5919;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L5921: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17658 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 512;  /* frndintxf2_mask_pm_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L13189: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6056;
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9123;
    }
  goto L4388;

 L6056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6057;
    }
  goto L4388;

 L6057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6058;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L6058: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6059;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6060;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6062;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6063;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6063: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6064;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L6064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 18149 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 521;  /* *strsetqi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L13283;
  x2 = XEXP (x1, 0);
  goto L4388;

 L13283: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 12)
    goto L9247;
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L9124;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L9247: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9248;
    }
  x2 = XEXP (x1, 0);
  goto L4388;

 L9248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L9251;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9252;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9253;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9253: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L9254;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 94 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
    {
      return 906;  /* sync_old_addqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L9125;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L9126;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 10)
    goto L9127;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9127: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9128;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9128: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L9129;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9129: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L9130;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9130: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L9131;
    case SET:
      goto L9200;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 43 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 900;  /* sync_compare_and_swapqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L9201;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L9202;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 3
      && XINT (x3, 1) == 11)
    goto L9203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9203: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L9204;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9204: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L9205;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9205: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (rtx_equal_p (x4, operands[3]))
    goto L9206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L9206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 83 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
    {
      return 903;  /* *sync_compare_and_swap_ccqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4388;

 L4389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L4390;
  goto ret0;

 L4390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4391;
    }
  goto ret0;

 L4391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4392;
    }
  goto ret0;

 L4392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4393;
    }
 L4438: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4439;
    }
  goto ret0;

 L4393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4394;
    case PC:
      goto L4463;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4395;

 L4395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4396;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4396: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4397;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4398;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L13284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13284: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13286;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13286: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13288: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13508 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 367;  /* *fp_jcc_1_mixed */
    }
 L13289: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13523 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 368;  /* *fp_jcc_1_sse */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4464;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4464: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4465;

 L4465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4467;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4467: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L13290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13290: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13292: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13294;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L13294: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13553 "../../gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 370;  /* *fp_jcc_2_mixed */
    }
 L13295: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13568 "../../gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 371;  /* *fp_jcc_2_sse */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4438;

 L4439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4440;
    case PC:
      goto L4511;
    default:
     break;
   }
  goto ret0;

 L4440: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4441;

 L4441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4442;
  goto ret0;

 L4442: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4443;
  goto ret0;

 L4443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4444;
  goto ret0;

 L4444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4445;
  goto ret0;

 L4445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 13538 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 369;  /* *fp_jcc_1_387 */
    }
  goto ret0;

 L4511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4512;
  goto ret0;

 L4512: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4513;

 L4513: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4514;
  goto ret0;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4515;
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4516;
  goto ret0;

 L4516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 13583 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 372;  /* *fp_jcc_2_387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_28 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM)
    goto L5928;
 L13299: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L913;
    }
 L13300: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1888;
    }
  goto ret0;

 L5928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5929;
    }
  goto L13299;

 L5929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L5930;
  x2 = XEXP (x1, 0);
  goto L13299;

 L5930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5931;
    }
  x2 = XEXP (x1, 0);
  goto L13299;

 L5931: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5933;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5934;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5935;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L5936;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5938;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L5940;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L5941;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5941: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5942;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L5942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 17812 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 514;  /* *strmovsi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13299;

 L913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13326;
  x2 = XEXP (x1, 0);
  goto L13300;

 L13326: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L914;
    case UNSPEC:
      goto L13329;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13300;

 L914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L915;
    }
  x2 = XEXP (x1, 0);
  goto L13300;

 L915: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L917;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L917: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L919;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L921: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4353 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 122;  /* fix_truncsi_i387_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L13329: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13331;
  x2 = XEXP (x1, 0);
  goto L13300;

 L13331: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5720;
    case 75L:
      goto L5870;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13300;

 L5720: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5721;
    }
  x2 = XEXP (x1, 0);
  goto L13300;

 L5721: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5722;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5723;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5724;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5725;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5726;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5727;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5727: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17256 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 497;  /* fistsi2_floor_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5870: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5871;
    }
  x2 = XEXP (x1, 0);
  goto L13300;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5873;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5875;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5877;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L5877: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17497 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 508;  /* fistsi2_ceil_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13300;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L13333;
  goto ret0;

 L13333: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1889;
    case UDIV:
      goto L1966;
    case UNSPEC:
      goto L13339;
    case PLUS:
      goto L4957;
    default:
     break;
   }
  goto ret0;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1890;
    }
  goto ret0;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1891;
    }
  goto ret0;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1892;
  goto ret0;

 L1892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1893;
    }
  goto ret0;

 L1893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1894;
  goto ret0;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1895;
  goto ret0;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1896;
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1897;
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1898;
    }
  goto ret0;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1899;
  goto ret0;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 195;  /* *divmodsi_noext */
    }
  goto ret0;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1967;
    }
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1968;
    }
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1969;
  goto ret0;

 L1969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1970;
    }
  goto ret0;

 L1970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1971;
  goto ret0;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1972;
  goto ret0;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1973;
  goto ret0;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1974;
  goto ret0;

 L1974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3]))
    goto L1975;
  goto ret0;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1976;
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 198;  /* *udivmodsi4_noext */
    }
  goto ret0;

 L13339: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 3:
      goto L13342;
    case 2:
      goto L13343;
    case 4:
      goto L13344;
    default:
      break;
    }
  goto ret0;

 L13342: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 17)
    goto L4881;
  goto ret0;

 L4881: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4882;
    }
  goto ret0;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tls_symbolic_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4883;
    }
  goto ret0;

 L4883: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (call_insn_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4884;
    }
  goto ret0;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4885;
  goto ret0;

 L4885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4886;
    }
  goto ret0;

 L4886: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4887;
  goto ret0;

 L4887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4888;
    }
  goto ret0;

 L4888: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4889;
  goto ret0;

 L4889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L13345;
  goto ret0;

 L13345: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13347;
  goto ret0;

 L13347: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13349;
  goto ret0;

 L13349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14478 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
    {
      return 403;  /* *tls_global_dynamic_32_gnu */
    }
 L13350: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14492 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS))
    {
      return 404;  /* *tls_global_dynamic_32_sun */
    }
  goto ret0;

 L13343: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 18)
    goto L4921;
  goto ret0;

 L4921: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4922;
    }
  goto ret0;

 L4922: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_insn_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4923;
    }
  goto ret0;

 L4923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4924;
  goto ret0;

 L4924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4925;
    }
  goto ret0;

 L4925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4926;
  goto ret0;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4927;
    }
  goto ret0;

 L4927: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4928;
  goto ret0;

 L4928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L13351;
  goto ret0;

 L13351: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L13353;
  goto ret0;

 L13353: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L13355;
  goto ret0;

 L13355: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14549 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
    {
      return 405;  /* *tls_local_dynamic_base_32_gnu */
    }
 L13356: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14562 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS))
    {
      return 406;  /* *tls_local_dynamic_base_32_sun */
    }
  goto ret0;

 L13344: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 20)
    goto L6154;
  goto ret0;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6155;
  goto ret0;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6156;
    }
  goto ret0;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6157;
    }
  goto ret0;

 L6157: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6158;
    }
  goto ret0;

 L6158: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6159;
    }
  goto ret0;

 L6159: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6160;
  goto ret0;

 L6160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6161;
  goto ret0;

 L6161: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6162;
  goto ret0;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6163;
    }
  goto ret0;

 L6163: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L6164;
  goto ret0;

 L6164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 526;  /* *strlenqi_1 */
    }
  goto ret0;

 L4957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 18)
    goto L4958;
  goto ret0;

 L4958: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4959;
    }
  goto ret0;

 L4959: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (call_insn_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4960;
    }
  goto ret0;

 L4960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == CONST)
    goto L4961;
  goto ret0;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 1
      && XINT (x4, 1) == 6)
    goto L4962;
  goto ret0;

 L4962: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (tls_symbolic_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L4963;
    }
  goto ret0;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4964;
  goto ret0;

 L4964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4965;
    }
  goto ret0;

 L4965: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4966;
  goto ret0;

 L4966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4967;
    }
  goto ret0;

 L4967: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4968;
  goto ret0;

 L4968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 407;  /* *tls_local_dynamic_32_once */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_29 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L13296;
    case HImode:
      goto L13303;
    case SImode:
      goto L13302;
    case QImode:
      goto L13304;
    default:
      break;
    }
 L4529: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L4530;
  goto ret0;

 L13296: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L833;
    }
 L13297: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L869;
    }
  goto L4529;

 L833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13305;
  x2 = XEXP (x1, 0);
  goto L13297;

 L13305: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L834;
    case UNSPEC:
      goto L13308;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13297;

 L834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L835;
    }
  x2 = XEXP (x1, 0);
  goto L13297;

 L835: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L836;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L837;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L838;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L839;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L839: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L840;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[4] = x2;
      goto L841;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L841: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4282 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))))
    {
      return 117;  /* fix_truncdi_i387 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L13308: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13310;
  x2 = XEXP (x1, 0);
  goto L13297;

 L13310: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5640;
    case 75L:
      goto L5790;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13297;

 L5640: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5641;
    }
  x2 = XEXP (x1, 0);
  goto L13297;

 L5641: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5642;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5643;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5644;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5645;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5645: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5646;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[4] = x2;
      goto L5647;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5647: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17183 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 492;  /* fistdi2_floor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5790: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5791;
    }
  x2 = XEXP (x1, 0);
  goto L13297;

 L5791: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5792;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5793;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5793: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5794;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5795;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5795: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5796;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[4] = x2;
      goto L5797;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L5797: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17424 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 503;  /* fistdi2_ceil */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13297;

 L869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L13312;
  x2 = XEXP (x1, 0);
  goto L4529;

 L13312: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L870;
    case UNSPEC:
      goto L13315;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4529;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L871;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L873;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L875;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L876;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L877;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L877: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4297 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 118;  /* fix_truncdi_i387_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L13315: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13317;
  x2 = XEXP (x1, 0);
  goto L4529;

 L13317: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5676;
    case 75L:
      goto L5826;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L5676: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5677;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5678;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5679;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5680;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5681;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L5683;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5683: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17198 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 493;  /* fistdi2_floor_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5826: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5827;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5828;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5829;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5830;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5831;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5832;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L5833;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5833: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17439 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 504;  /* fistdi2_ceil_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L13303: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L5946;
 L13298: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L901;
    }
 L13301: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1993;
    }
  goto L4529;

 L5946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5947;
    }
  goto L13298;

 L5947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L5948;
  x2 = XEXP (x1, 0);
  goto L13298;

 L5948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5949;
    }
  x2 = XEXP (x1, 0);
  goto L13298;

 L5949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5951;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5953;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L5954;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5954: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5955;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5956;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5957;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L5958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L5959;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L5960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 17844 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 515;  /* *strmovhi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13298;

 L901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L13319;
  x2 = XEXP (x1, 0);
  goto L13301;

 L13319: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L902;
    case UNSPEC:
      goto L13322;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L13301;

 L902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L903;
    }
  x2 = XEXP (x1, 0);
  goto L13301;

 L903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L904;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L905;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L905: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L906;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L907;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L908;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L909;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L909: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4353 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 121;  /* fix_trunchi_i387_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L13322: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L13324;
  x2 = XEXP (x1, 0);
  goto L13301;

 L13324: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74L:
      goto L5708;
    case 75L:
      goto L5858;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L13301;

 L5708: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5709;
    }
  x2 = XEXP (x1, 0);
  goto L13301;

 L5709: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5711;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5713;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5713: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5714;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5715;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5715: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17256 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 496;  /* fisthi2_floor_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5858: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L5859;
    }
  x2 = XEXP (x1, 0);
  goto L13301;

 L5859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L5861;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L5862;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L5863;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5865;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L5865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17497 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 507;  /* fisthi2_ceil_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L13301;

 L1993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UDIV)
    goto L1994;
  x2 = XEXP (x1, 0);
  goto L4529;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1995;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1996;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1998;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L1998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L1999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2000;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2002;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L2002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2003;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L2003: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 199;  /* *udivmodhi_noext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L13302: ATTRIBUTE_UNUSED_LABEL
  tem = recog_28 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L4529;

 L13304: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L5964;
  goto L4529;

 L5964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5965;
    }
  goto L4529;

 L5965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L5966;
  x2 = XEXP (x1, 0);
  goto L4529;

 L5966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5967;
    }
  x2 = XEXP (x1, 0);
  goto L4529;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5968;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5969;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5970;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L5971;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L5972;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5972: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5973;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5974;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L5976;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L5977;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L5978;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && 
#line 17876 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 516;  /* *strmovqi_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L4529;

 L4530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L4531;
  goto ret0;

 L4531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4664;
    }
  goto ret0;

 L4664: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (float_operator (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4665;
    }
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4533;
    }
  goto ret0;

 L4665: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
    {
    case HImode:
      goto L13357;
    case SImode:
      goto L13358;
    default:
      break;
    }
  goto ret0;

 L13357: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L4666;
    }
  goto ret0;

 L4666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L4667;
    }
  goto ret0;

 L4667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4668;
  goto ret0;

 L4668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L4669;

 L4669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4670;
  goto ret0;

 L4670: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4671;
  goto ret0;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4672;
  goto ret0;

 L4672: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4673;
  goto ret0;

 L4673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4674;
  goto ret0;

 L4674: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4675;
  goto ret0;

 L4675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L4676;
    }
  goto ret0;

 L4676: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13694 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))))
    {
      return 378;  /* *fp_jcc_8hi_387 */
    }
  goto ret0;

 L13358: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L4694;
    }
  goto ret0;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L4695;
    }
  goto ret0;

 L4695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L4696;
  goto ret0;

 L4696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L4697;

 L4697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4698;
  goto ret0;

 L4698: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4699;
  goto ret0;

 L4699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4700;
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4701;
  goto ret0;

 L4701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4702;
  goto ret0;

 L4702: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L4703;
  goto ret0;

 L4703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L4704;
    }
  goto ret0;

 L4704: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13694 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))))
    {
      return 379;  /* *fp_jcc_8si_387 */
    }
  goto ret0;

 L4533: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4534;
    }
 L4586: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4587;
    }
  if (const0_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4640;
    }
  goto ret0;

 L4534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L4535;
    case PC:
      goto L4561;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4586;

 L4535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L4536;

 L4536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L4537;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4586;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4538;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4586;

 L4538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L4539;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4586;

 L4539: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4540;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4586;

 L4540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L4541;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L4586;

