<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" 
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head>
<title>Сортировка</title>
</head>
<body>
<table>
<tr bgcolor="FFF000">
<th>Numbers</th>
<th>Letters</th>
</tr>
<xsl:for-each select="body/element">
<xsl:sort select="numbers" order="ascending"/>
<xsl:sort select="letters" order="ascending"/>
<tr>
<td><xsl:value-of select="numbers"/></td>
<td><xsl:value-of select="letters"/></td>
</tr>
</xsl:for-each>
</table></body></html>
</xsl:template>
</xsl:stylesheet>
